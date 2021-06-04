NAME = ex03
CC = clang++
CPP_FLAGS = -Wall -Wextra -Werror
CPP_FILES = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp
OBJFILES = $(CPP_FILES:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJFILES)
	$(CC) $(OBJFILES) -o $@

.cpp.o:
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJFILES)

fclean: clean
	rm -rf $(NAME)
	rm -rf SCF
	rm -rf *.dSYM

leak: all
	valgrind ./$(NAME)

re: fclean all