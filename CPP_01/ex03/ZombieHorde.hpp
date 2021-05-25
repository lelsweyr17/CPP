#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <iostream>
# include "Zombie.hpp"

class  ZombieHorde
{
private:
	int _zombieNbr;
	Zombie *_horde;
	std::string _type;
public:
	ZombieHorde();
	~ZombieHorde();

	ZombieHorde(int n);
	void	announce();

	void	setZombieType();
	std::string	getRandomName();
};

#endif