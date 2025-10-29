/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouygui <nbouygui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:43:22 by nbouygui          #+#    #+#             */
/*   Updated: 2025/10/28 09:15:58 by nbouygui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*c_dest;
	const char	*c_src = src;

	c_dest = dest;
	if (!src || !dest)
		return (NULL);
	while (n)
	{
		*c_dest++ = *(c_src++);
		n--;
	}
	return (dest);
}
