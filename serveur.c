/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serveur.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 12:17:42 by tchtaibi          #+#    #+#             */
/*   Updated: 2021/12/16 22:24:34 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_converter(char *str)
{
	char	c;
	int		i;
	int		power;

	power = 1;
	c = 0;
	i = ft_strlen(str) - 1;
	while (i + 1 != 0)
	{
		c += power * (str[i] - '0');
		i--;
		power *= 2;
	}
	write(1, &c, 1);
}

void	ft_checker(int n)
{
	static char		*c;
	static int		i;

	if (c == 0)
		c = malloc(9);
	if (n == SIGUSR1)
		c[i] = '0';
	else
		c[i] = '1';
	i++;
	if (i == 8)
	{
		c[8] = '\0';
		ft_converter(c);
		i = 0;
	}
}

int	main()
{
	ft_printf("PID = %u\n", getpid());
	signal(SIGUSR1, ft_checker);
	signal(SIGUSR2, ft_checker);
	while (1)
		pause();
}
