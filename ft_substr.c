/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouygui <nbouygui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 11:01:45 by nbouygui          #+#    #+#             */
/*   Updated: 2025/10/28 09:32:22 by nbouygui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	const size_t	s_len = ft_strlen(s);

	if (!s)
		return (NULL);
	if (start > s_len)
		return (ft_calloc(1, 1));
	if (len > s_len - start)
		len = s_len - start + 1;
	else
		len += 1;
	sub = ft_calloc(len, 1);
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, &s[start], len);
	return (sub);
}
