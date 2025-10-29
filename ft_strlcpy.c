/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouygui <nbouygui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:26:48 by nbouygui          #+#    #+#             */
/*   Updated: 2025/10/28 09:25:51 by nbouygui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;

	if (!dst || !src)
		return (0);
	len = ft_strlen(src);
	while (*src && size > 1)
	{
		*dst++ = *src++;
		size--;
	}
	if (size)
		*dst = '\0';
	return (len);
}
