/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouygui <nbouygui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:00:22 by nbouygui          #+#    #+#             */
/*   Updated: 2025/10/27 18:05:23 by nbouygui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*mem = s;

	if (!s)
		return (NULL);
	while (n)
	{
		if (*mem == (unsigned char) c)
			return ((void *) mem);
		mem++;
		n--;
	}
	return (NULL);
}
