#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA {

private:
	HumanA();
	Weapon		&_weapon;
	std::string	_name;

public:
	HumanA(const std::string& valueName, Weapon& valueWeapon);
	~HumanA();

	void		setWeapon(Weapon valueWeapon);
	void		attack();

};

#endif
