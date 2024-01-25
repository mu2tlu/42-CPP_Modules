SRC			=	main.cpp \
				Harl.cpp

NAME 		= Harl
CC 			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98 -g3
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