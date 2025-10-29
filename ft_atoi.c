/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouygui <nbouygui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:45:13 by nbouygui          #+#    #+#             */
/*   Updated: 2025/10/27 17:55:09 by nbouygui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_iswhitespace(int c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	long	nbr;
	int		sign;

	if (!nptr)
		return (0);
	while (ft_iswhitespace(*nptr))
		nptr++;
	sign = -1;
	if (*nptr == '-')
		sign = 1;
	if (*nptr == '+' || *nptr == '-')
		nptr++;
	nbr = 0;
	while (*nptr && ft_isdigit(*nptr))
	{
		nbr = nbr * 10 - (*nptr - '0');
		if (sign == 1 && (nbr * sign) > 0)
			return (0);
		else if (sign == -1 && (nbr * sign) < 0)
			return (-1);
		nptr++;
	}
	return ((int) nbr * sign);
}
