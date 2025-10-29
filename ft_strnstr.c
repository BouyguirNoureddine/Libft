/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouygui <nbouygui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:19:15 by nbouygui          #+#    #+#             */
/*   Updated: 2025/10/28 09:28:44 by nbouygui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (!big || !little)
		return (NULL);
	if (!*little)
		return ((char *)big);
	while (*big && len)
	{
		if (*big == *little)
		{
			if (!ft_strncmp(big, little, ft_strlen(little)))
				return ((char *)big);
		}
		big++;
		len--;
	}
	return (NULL);
}
