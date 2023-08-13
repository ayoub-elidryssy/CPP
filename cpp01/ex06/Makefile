NAME = harlFilter

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = main.o Harl.o

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)