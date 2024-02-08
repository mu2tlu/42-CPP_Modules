SRC			=	main.cpp \
				ClapTrap.cpp \
				ScavTrap.cpp

NAME 		= ScavTrap
CC 			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
OBJ 		= $(SRC:.cpp=.o)

RM			= rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: 	fclean $(NAME)

.PHONY: all clean fclean re