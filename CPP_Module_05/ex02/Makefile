NAME = Bureaucrat
FILES = main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp
FLAGS = c++ -std=c++98 -Wall -Wextra -Werror

all: $(NAME)

$(NAME):	$(FILES)
	$(FLAGS) $(FILES) -o $(NAME)
	@echo "\033[0;32mDone\033[m"

clean:
	@rm -f $(NAME)
	@rm -rf *.shrubbery
	@echo "\033[0;34mclean\033[m"

fclean: clean

re: clean all

.PHONY: all clean re fclean