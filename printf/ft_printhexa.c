/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:25:41 by tchtaibi          #+#    #+#             */
/*   Updated: 2021/11/23 09:18:49 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhexlow(unsigned long nbr)
{
	char			*base;
	unsigned long	tmp;

	base = "0123456789abcdef";
	tmp = nbr;
	if (nbr >= 16)
	{
		ft_printhexlow(nbr / 16);
		ft_printhexlow(nbr % 16);
	}
	else
		write(1, &base[nbr], 1);
	return (int_hex(tmp));
}

int	ft_printhexup(unsigned int nbr)
{
	char			*base;
	unsigned int	tmp;

	base = "0123456789ABCDEF";
	tmp = nbr;
	if (nbr >= 16)
	{
		ft_printhexup(nbr / 16);
		ft_printhexup(nbr % 16);
	}
	else
		write(1, &base[nbr], 1);
	return (int_hex(tmp));
}

int	ft_printp(unsigned long nbr)
{
	char			*base;
	unsigned long	tmp;

	tmp = nbr;
	base = "0123456789abcdef";
	if (nbr >= 16)
	{
		ft_printp(nbr / 16);
		ft_printp(nbr % 16);
	}
	else
		write(1, &base[nbr], 1);
	return (int_len_p(tmp));
}

int	int_len_p(unsigned long nbr)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		nbr = nbr * -1;
	}
	while (nbr > 0)
	{
		i++;
		nbr /= 16;
	}
	return (i);
}
