#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

# define RED		"\x1b[31m"
# define GREEN		"\x1b[32m"
# define YELLOW		"\x1b[33m"
# define BLUE		"\x1b[34m"
# define MAGENTA	"\x1b[35m"
# define CYAN		"\x1b[36m"
# define WHITE		"\x1b[37m"
# define RESET		"\x1b[0m"
# define BOLD_FONT	"\e[1m"
# define RESET_BOLD	"\e[0m"

class  Zombie {
	public:
		Zombie();
		~Zombie();

		Zombie(const std::string& name, const std::string& type);
		
		void		announce();

	private:
		std::string	_name;
		std::string	_type;
};

#endif