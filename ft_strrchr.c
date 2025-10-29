/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouygui <nbouygui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:47:08 by nbouygui          #+#    #+#             */
/*   Updated: 2025/10/28 09:29:32 by nbouygui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	if (!s)
		return (NULL);
	len = ft_strlen(s) + 1;
	while (len)
	{
		if ((unsigned char)*(s + (len - 1)) == (unsigned char)c)
			return ((char *)(s + (len - 1)));
		len--;
	}
	return (NULL);
}
