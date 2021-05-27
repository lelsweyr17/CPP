#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <iostream>
# include "Zombie.hpp"

class  ZombieHorde {
	public:
		ZombieHorde();
		ZombieHorde(int n);
		~ZombieHorde();

		void		announce();

		void		setZombieType();
		std::string	getRandomName();

	private:
		int			_zombieNbr;
		Zombie		*_horde;
		std::string	_type;
};

#endif