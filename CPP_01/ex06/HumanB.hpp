#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB {

private:
	std::string	_name;
	Weapon		*_weapon;

public:
	HumanB();
	~HumanB();
	HumanB(const std::string& valueName);

	void		setWeapon(Weapon& valueWeapon);
	void		attack();

};

#endif