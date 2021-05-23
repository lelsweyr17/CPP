NAME = Megaphone
CC = clang++
CPP_FLAGS = -Wall -Wextra -Werror
CPP_FILES = Megaphone.cpp
OBJFILES = $(CPP_FILES:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJFILES)
	$(CC) $(OBJFILES) -o $@

.cpp.o:
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJFILES)

fclean: fclean
	rm -rf $(NAME)

re: fclean all
