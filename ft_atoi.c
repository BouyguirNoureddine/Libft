/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouygui <nbouygui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:45:13 by nbouygui          #+#    #+#             */
/*   Updated: 2025/10/30 14:32:39 by nbouygui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_iswhitespace(int c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	ft_atoi(const char *nptr)
{
	long	nbr;
	long	guard;
	int		sign;

	if (!nptr)
		return (0);
	while (ft_iswhitespace(*nptr))
		nptr++;
	sign = 1;
	if (*nptr == '-')
		sign = -1;
	if (*nptr == '+' || *nptr == '-')
		nptr++;
	nbr = 0;
	while (*nptr && ft_isdigit(*nptr))
	{
		guard = nbr;
		if ((nbr * 10 + (*nptr - '0')) / 10 != guard && sign == 1)
			return (-1);
		if ((nbr * 10 + (*nptr - '0')) / 10 != guard && sign == -1)
			return (0);
		nbr = nbr * 10 + (*nptr - '0');
		nptr++;
	}
	return (nbr * sign);
}
