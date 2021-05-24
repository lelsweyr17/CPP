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

class  Zombie
{
private:
	std::string	_name;
	std::string	_type;

public:
	Zombie();
	~Zombie();

	Zombie(std::string _name, std::string _type);
	
	void	announce();
	void	setZombieType(std::string);
	void	setZombieName(std::string);
	std::string	getZombieType();
	std::string	getZombieName();

};

#endif