NAME = megaphone
CC = clang++
CPP_FLAGS = -Wall -Wextra -Werror
CPP_FILES = megaphone.cpp
OBJFILES = $(CPP_FILES:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJFILES)
	$(CC) $(OBJFILES) -o $@

.cpp.o:
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJFILES)

fclean:
	rm -rf $(NAME)

re: fclean all
