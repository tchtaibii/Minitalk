/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 12:16:48 by tchtaibi          #+#    #+#             */
/*   Updated: 2021/12/15 13:12:28 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
void ft_send(int pid, char *str)
{
    int i;
    
    i = 0;
    while (str[i])
    {
        if (str[i] == '0')
            kill(pid, SIGUSR1);
        else
            kill(pid, SIGUSR2);
        usleep(100);
        i++;
    }
    
}

char *ft_to_binary(char *str, int i, int j, int len)
{
    char *tmp;
    int bts;
    char c;
    int len_c;

    len = ft_strlen(str);
    len_c = len;
    tmp = malloc((len * 8) + 1);
    tmp[len * 8] = '\0';
    while (str[i])
    {
        c = str[len_c - 1];
        bts = 9;
        while (--bts > 0)
        {
            if ((c % 2) == 1)
                tmp[len * 8 - 1 - j++] = '1';
            else
                tmp[len * 8 - 1 - j++] = '0';
            c /= 2;
        }
        i++;
        len_c--;
    }
    return (tmp);
}

int	main(int ac, char **av)
{
	int pid;
	char *str;
	
    if (ac == 3)
    {
		pid = ft_atoi(av[1]);
		str = ft_to_binary(av[2], 0, 0, 0);
        ft_send(pid, str);
        free(str);
    }
    else
	{
		ft_printf("*****You should type 3 arguments, no more, no less*****");
		return (0);
	}
}
