/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouygui <nbouygui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:43:22 by nbouygui          #+#    #+#             */
/*   Updated: 2025/10/30 12:12:37 by nbouygui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*c_dest;
	const char	*c_src = src;
	size_t		i;

	if (!src || !dest)
		return (NULL);
	if (dest == src)
		return (dest);
	c_dest = dest;
	i = 0;
	while (i < n)
	{
		*(c_dest + i) = *(c_src + i);
		i++;
	}
	return (dest);
}
