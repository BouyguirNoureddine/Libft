/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouygui <nbouygui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 14:22:26 by nbouygui          #+#    #+#             */
/*   Updated: 2025/10/22 12:54:11 by nbouygui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(const char *s, char c)
{
	size_t	word;

	word = 0;
	if (!s)
		return (0);
	while (*s)
	{
		while (*s && *s != c)
			s++;
		word++;
		if (*s)
			s++;
	}
	return (word);
}

static void	ft_freeall(char **splited, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		free(splited[i++]);
	free(splited);
}

static size_t	ft_allocword(char **splited, const char *s, char c)
{
	size_t	i;
	int		len;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c)
			{
				s++;
				len++;
			}
			splited[i] = ft_calloc(len + 1, 1);
			if (!splited[i])
				return (i);
			i++;
		}
		if (*s)
			s++;
	}
	return (0);
}

static void	ft_copyword(char **splited, const char *s, char c)
{
	size_t	i;
	int		len;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c)
			{
				splited[i][len] = *s;
				s++;
				len++;
			}
			splited[i][len] = '\0';
			i++;
		}
		if (*s)
			s++;
	}
}

char	**ft_split(char const *s, char c)
{
	char			**splited;
	const size_t	nbword = ft_countword(s, c);
	size_t			i;

	if (!s)
		return (NULL);
	splited = ft_calloc(nbword + 1, 8);
	if (!splited)
		return (NULL);
	i = ft_allocword(splited, s, c);
	if (!i)
		ft_copyword(splited, s, c);
	else
	{
		ft_freeall(splited, i);
		splited = NULL;
	}
	return (splited);
}
