#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <iostream>
# include <ctime>
# include "Zombie.hpp"

class  ZombieEvent
{
public:
	ZombieEvent();
	~ZombieEvent();

	void	setZombieType();
	void	randomChump();
	std::string	getZombieType();
	std::string	getRandomName();
	Zombie *newZombie(std::string name);

private:
	std::string	_name;
	std::string _type;

};

#endif