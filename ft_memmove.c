/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouygui <nbouygui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:25:35 by nbouygui          #+#    #+#             */
/*   Updated: 2025/10/27 18:11:46 by nbouygui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*c_dest;
	const char	*c_src = src;

	c_dest = dest;
	if (!dest || !src)
		return (NULL);
	if (dest > src)
	{
		while (n)
		{
			ft_memcpy(c_dest + (n - 1), c_src + (n - 1), 1);
			n--;
		}
	}
	else
		ft_memcpy(dest, c_src, n);
	return (dest);
}
