NAME = program

CXX = c++

CPPFLAGS = -Wall -Wextra  -Werror -std=c++98

OBJ =  Fixed.o main.o

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all