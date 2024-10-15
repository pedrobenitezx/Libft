/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenitez <pbenitez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:16:50 by pbenitez          #+#    #+#             */
/*   Updated: 2024/10/15 14:05:19 by pbenitez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char		num_str[12];
	long		nbr;
	int			i;

	nbr = n;
	i = 0;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = -nbr;
	}
	if (nbr == 0)
		ft_putchar_fd('0', fd);
	while (nbr > 0)
	{
		num_str[i++] = (nbr % 10) + '0';
		nbr /= 10;
	}
	while (--i >= 0)
		ft_putchar_fd(num_str[i], fd);
}
