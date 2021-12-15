/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:25:01 by tchtaibi          #+#    #+#             */
/*   Updated: 2021/11/23 09:17:19 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	unsigned int	nb;
	int				tmp;

	tmp = n;
	if (n < 0)
	{
		write(1, "-", 1);
		nb = n * -1;
	}
	else
		nb = n;
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10 + 48));
	}
	if (nb < 10)
		ft_putchar((nb + 48));
	return (int_len(tmp));
}

int	ft_putnbr_u(unsigned int nb)
{
	unsigned int	tmp;

	tmp = nb;
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10 + 48));
	}
	if (nb < 10)
		ft_putchar((nb + 48));
	return (int_u_len(tmp));
}
