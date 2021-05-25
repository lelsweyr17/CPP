#include "HumanB.hpp"

HumanB::HumanB()
{
}

HumanB::~HumanB()
{
}

HumanB::HumanB(const std::string& valueName) : _name(valueName)
{
}

void	HumanB::setWeapon(Weapon& valueWeapon)
{
    _weapon = &valueWeapon;
}

void	HumanB::attack()
{
	std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}