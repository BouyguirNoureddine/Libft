/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouygui <nbouygui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:19:15 by nbouygui          #+#    #+#             */
/*   Updated: 2025/10/30 12:19:36 by nbouygui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char		*guard = big;
	const size_t	little_len = ft_strlen(little);

	if (!big || !little)
		return (NULL);
	if (!*little)
		return ((char *)big);
	while (*big && len)
	{
		if (*big == *little)
		{
			if (len -(big - guard) < little_len)
				return (NULL);
			if (!ft_strncmp(big, little, little_len))
				return ((char *)big);
		}
		big++;
	}
	return (NULL);
}
