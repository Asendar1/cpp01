SRC = main.cpp
OBJ = main.o

CXX = c++ -Wall -Wextra -Werror -std=c++98
NAME = replacer

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(OBJ) -o $(NAME)
clean:
	rm -f main.o
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re
