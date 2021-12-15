# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/20 04:22:58 by tchtaibi          #+#    #+#              #
#    Updated: 2021/11/23 09:28:59 by tchtaibi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
OBJS = ${SRC:.c=.o}
FLAGS = -Wall -Wextra -Werror
ARG = -c
SRC = ft_printf.c ft_printhexa.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_strlen.c int_len.c

all : $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)
	
$(OBJS):
	$(CC) $(FLAGS) $(SRC) $(ARG)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re: fclean all