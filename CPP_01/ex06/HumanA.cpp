#include "HumanA.hpp"

HumanA::HumanA(const std::string& valueName, Weapon& valueWeapon) : _name(valueName), _weapon(valueWeapon)
{
}

HumanA::~HumanA()
{
}

void	HumanA::setWeapon(Weapon valueWeapon)
{
	_weapon = valueWeapon;
}

void	HumanA::attack()
{
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}
