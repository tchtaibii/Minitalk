/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 04:19:07 by tchtaibi          #+#    #+#             */
/*   Updated: 2021/11/23 09:13:17 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef    FT_PRINTF_H
# define    FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_strlen(char *s);
int		ft_putnbr(int n);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr_u(unsigned int nb);
int		ft_printp(unsigned long nbr);
int		ft_printhexlow(unsigned long nbr);
int		ft_printhexup(unsigned int nbr);
int		int_len_p(unsigned long nbr);
int		int_u_len(unsigned int nbr);
int		int_len(long int nbr);
int		int_hex(int long nbr);

#endif