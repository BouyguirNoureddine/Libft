/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouygui <nbouygui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:16:14 by nbouygui          #+#    #+#             */
/*   Updated: 2025/10/28 09:25:26 by nbouygui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;

	if (!src || !dst)
		return (0);
	if (size < ft_strlen(dst))
		return (size + ft_strlen(src));
	len = ft_strlen(dst) + ft_strlen(src);
	while (*dst && size)
		dst++;
	while (*src && size > 1)
	{
		*dst++ = *src++;
		size--;
	}
	if (size)
		*dst = '\0';
	return (len);
}
