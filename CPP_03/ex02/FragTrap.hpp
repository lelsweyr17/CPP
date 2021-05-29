#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

# define RED		"\x1b[31m"
# define GREEN		"\x1b[32m"
# define YELLOW		"\x1b[33m"
# define BLUE		"\x1b[34m"
# define MAGENTA	"\x1b[35m"
# define CYAN		"\x1b[36m"
# define WHITE		"\x1b[37m"
# define RESET		"\x1b[0m"
# define ITALIC		"\e[3m"
# define BOLD		"\e[1m"
# define RESET_FONT	"\e[0m"

class FragTrap : public ClapTrap {
	public:
		FragTrap();
		~FragTrap();
		FragTrap(std::string, int, int, int, int, int, int, int, int);
		FragTrap(const FragTrap& fragTrap);
		FragTrap& operator=(const FragTrap& fragTrap);

		void	vaulthunter_dot_exe(std::string const &target);
};

#endif