FLAGS = -Wall -Wextra -Werror
SRC_CLIENT = client.c ft_strlen.c ft_atoi.c
SRC_SERVEUR = serveur.c ft_strlen.c ft_atoi.c
CC = gcc
PRINT = printf/libftprintf.a

all : prt
	@$(CC) $(FLAGS) $(SRC_CLIENT) $(PRINT) -o client
	@$(CC) $(FLAGS) $(SRC_SERVEUR) $(PRINT) -o serveur
	@tput setaf 2; echo "MINITALK is ready"

prt :
	@cd printf && make && cd ..

clean :
	@rm -f client serveur
	@cd printf && make clean && cd ..
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean
	@cd printf && make fclean && cd ..

re: fclean all