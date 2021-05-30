NAME = ex01
CC = clang++
CPP_FLAGS = -Wall -Wextra -Werror
CPP_FILES = main.cpp AWeapon.cpp PlasmaRifle.cpp PowerFist.cpp Enemy.cpp SuperMutant.cpp RadScorpion.cpp Character.cpp
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