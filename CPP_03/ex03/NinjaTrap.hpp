#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

# define RED		"\x1b[31m"
# define GREEN		"\x1b[32m"
# define YELLOW		"\x1b[33m"
# define BLUE		"\x1b[34m"
# define MAGENTA	"\x1b[35m"
# define CYAN		"\x1b[36m"
# define WHITE		"\x1b[37m"
# define ITALIC		"\e[3m"
# define BOLD		"\e[1m"
# define RESET		"\e[0m"

class NinjaTrap : public ClapTrap {
	public:
		NinjaTrap();
		~NinjaTrap();
		NinjaTrap(std::string, int, int, int, int, int, int, int, int);
		NinjaTrap(const NinjaTrap& ninjaTrap);
		NinjaTrap& operator=(const NinjaTrap& ninjaTrap);

		void	ninjaShoebox(std::string const &target);
};

#endif