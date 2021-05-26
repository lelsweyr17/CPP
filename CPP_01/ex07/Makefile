NAME = Replace
CC = clang++
CPP_FLAGS = -Wall -Wextra -Werror
CPP_FILES = Replace.cpp main.cpp
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
	rm -rf *.replace

re: fclean all
