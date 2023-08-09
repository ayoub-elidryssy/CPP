NAME = Human

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = main.o Weapon.o HumanA.o HumanB.o

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)