FLAGS = -Wall -Wextra -Werror
SRC_CLIENT = client.c ft_strlen.c ft_atoi.c
SRC_SERVER = server.c ft_strlen.c ft_putnbr.c
CC = cc

all : client server 

client : $(SRC_CLIENT)
	@$(CC) $(FLAGS) $(SRC_CLIENT) -o client
	@tput setaf 2; echo "CLIENT IS READY"

server  : $(SRC_SERVER)
	@$(CC) $(FLAGS) $(SRC_SERVER) -o server
	@tput setaf 2; echo "SERVER IS READY"

clean :
	@rm -f client server
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean

re: fclean all

norm :
	@tput setaf 2;norminette minitalk.h client.c server.c ft_strlen.c ft_atoi.c ft_putnbr.c