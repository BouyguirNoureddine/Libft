/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouygui <nbouygui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 13:35:10 by nbouygui          #+#    #+#             */
/*   Updated: 2025/10/22 12:55:14 by nbouygui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_in(const char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int			len;
	char		*trim;
	const char	*end;

	if (!s1 || !set)
		return (NULL);
	while (ft_in(*s1, set))
		s1++;
	len = ft_strlen(s1);
	if (!len)
		return (NULL);
	end = &s1[len];
	while (ft_in(s1[--len], set))
		end = &s1[len];
	trim = ft_calloc(end - s1 + 1, 1);
	if (!trim)
		return (NULL);
	ft_memcpy(trim, s1, end - s1);
	return (trim);
}
