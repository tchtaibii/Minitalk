/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:26:07 by tchtaibi          #+#    #+#             */
/*   Updated: 2021/11/23 08:55:24 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;

	if (!s)
		return (ft_putstr("(null)"));
	if (s)
	{
		i = 0;
		while (s[i])
		{
			write(1, &s[i], 1);
			i++;
		}
		return (i);
	}
	return (0);
}
