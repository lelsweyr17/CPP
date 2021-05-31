NAME = ex03
CC = clang++
CPP_FLAGS = -Wall -Wextra -Werror
CPP_FILES = main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp
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

re: fclean all