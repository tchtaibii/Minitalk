/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 12:17:07 by tchtaibi          #+#    #+#             */
/*   Updated: 2021/12/15 13:32:18 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	MINITALK_C
# define	MINITALK_C

# include <sys/types.h>
# include <signal.h>
# include <unistd.h>
# include <stdlib.h>
# include "printf/ft_printf.h"

int	ft_atoi(char *str);
int	ft_strlen(char *str);
void	*ft_calloc(size_t count, size_t size);

#endif