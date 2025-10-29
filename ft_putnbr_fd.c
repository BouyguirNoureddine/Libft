/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouygui <nbouygui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:00:29 by nbouygui          #+#    #+#             */
/*   Updated: 2025/10/28 19:30:43 by nbouygui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	nbr[12];
	int		i;
	int		sign;

	if (fd < 0)
		return ;
	i = 0;
	sign = -1;
	if (n > 0)
	{
		n *= -1;
		sign = 1;
	}
	else if (n == 0)
		nbr[i++] = '0';
	if (sign == -1 && n != 0)
		write (fd, "-", 1);
	while (n)
	{
		nbr[i++] = -(n % 10) + '0';
		n /= 10;
	}
	while (i > 0)
		write (fd, &nbr[--i], 1);
}
