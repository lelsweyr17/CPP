#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <iostream>
# include <ctime>
# include "Zombie.hpp"

class  ZombieEvent {

private:
	std::string	_type;

public:
	ZombieEvent();
	~ZombieEvent();

	void		setZombieType();
	void		randomChump();
	Zombie		*newZombie(std::string name);
	std::string	getRandomName();

};

#endif