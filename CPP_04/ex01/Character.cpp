#include "Character.hpp"

Character::Character()
{
}

Character::~Character()
{
	
}

Character::Character(std::string const &name) : name(name), ap(40), weapon(0)
{
}

Character::Character(const Character& copy)
{
	operator=(copy);
}

Character& Character::operator=(const Character& character)
{
	if (this != &character) {
		name = character.name;
	}
	return *this;
}

std::ostream	&operator<<(std::ostream &out, const Character &character)
{
	if (!character.getAWeapon()) {
		out << character.getName() << " has " << character.getAP() << " AP and is unarmed" << std::endl;
	}
	else {
		out << character.getName() << " has " << character.getAP() << " AP and wields a " << character.getAWeapon()->getName() << std::endl;
	}
	return out;
}

AWeapon				*Character::getAWeapon() const
{
	return weapon;
}

std::string const	Character::getName() const
{
	return name;
}

unsigned int		Character::getAP() const
{
	return ap;
}

void				Character::equip(AWeapon *aWeapon)
{
	weapon = aWeapon;
}

void				Character::recoverAP()
{
	ap = (ap + 10 >= 40) ? 40 : ap + 10;
}

void				Character::attack(Enemy *enemy)
{
	if (ap - weapon->getAPCost() >= 0) {
		std::cout << name << " attacks " << enemy->getType() << " with " << weapon->getName() << std::endl;
		weapon->attack();
		ap -= weapon->getAPCost();
	}
	else {
		std::cout << "AP is not enough fot attack with " << weapon->getName() << "!" << std::endl;
	}
}