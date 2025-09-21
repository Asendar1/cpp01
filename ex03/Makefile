SRC_FILES = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
SRC = $(addprefix src/, $(SRC_FILES))

OBJS = $(addprefix $(OBJS_DIR)/, $(SRC_FILES:.cpp=.o))
OBJS_DIR = obj/

NAME = fight
CXX = c++ -Wall -Wextra -Werror -std=c++98 -Iinc

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(OBJS) -o $(NAME)

$(OBJS_DIR)%.o: src/%.cpp | $(OBJS_DIR)
	$(CXX) -c $< -o $@

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)
clean:
	rm -rf $(OBJS_DIR)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re
