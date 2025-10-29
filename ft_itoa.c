/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouygui <nbouygui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:33:13 by nbouygui          #+#    #+#             */
/*   Updated: 2025/10/28 17:47:24 by nbouygui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countnbr(int c)
{
	int	nbr;

	nbr = 0;
	if (!c || c < 0)
		nbr = 1;
	while (c)
	{
		c /= 10;
		nbr++;
	}
	return (nbr);
}

char	*ft_itoa(int n)
{
	char	*ascii;
	int		nbnmbr;

	nbnmbr = ft_countnbr(n) + 1;
	ascii = ft_calloc(nbnmbr, 1);
	if (!ascii)
		return (NULL);
	if (n > 0)
		n *= -1;
	while (--nbnmbr)
	{
		ascii[nbnmbr - 1] = -(n % 10) + '0';
		n /= 10;
	}
	if (ascii[0] == '0' && ft_strlen(ascii) > 1)
		ascii[0] = '-';
	return (ascii);
}
