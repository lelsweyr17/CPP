#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}

Weapon::Weapon(std::string valueType)
{
	_type = valueType;
}

std::string	&Weapon::getType()
{
	return _type;
}

void        Weapon::setType(std::string valueType)
{
	_type = valueType;
}