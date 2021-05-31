#include "Character.hpp"

Character::Character() {
}

Character::~Character() {
}

Character::Character(std::string const &name) : name(name), count(0) {
	for (int i = 0; i < 4; i++) {
		equipment[i] = 0;
	}
	std::cout << "* create new character " << name << " *" << std::endl;
}

Character::Character(const Character &copy) {
	(operator=(copy));
}

Character&			Character::operator=(const Character &character) {
	if (this != &character) {
		name = character.name;
	}
	return *this;
}

std::string const	&Character::getName() const {
	return name;
}

void				Character::equip(AMateria* aMateria) {
	if (count < 4) {
		equipment[count] = aMateria;
		std::cout << "* " << name << " equiped with " << equipment[count]->getType() << " *" << std::endl;
		count++;
	}
	else {
		std::cout << "* equipment of " << name << " is full *" << std::endl;
	}
}

void				Character::unequip(int idx) {
	if (equipment[idx]) {
		std::cout << "* " << name << " unequiped with " << equipment[idx]->getType() << " *" << std::endl;
		equipment[idx] = 0;
	}
}

void				Character::use(int idx, ICharacter& target) {
	if (equipment[idx])
		std::cout << "* shoots an " << equipment[idx]->getType() << " bolt at " << target.getName() <<" *" << std::endl;
	else
		std::cout << "* unkhown equipment *" << std::endl;
}