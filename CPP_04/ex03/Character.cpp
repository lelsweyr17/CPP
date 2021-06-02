#include "Character.hpp"

Character::Character() {
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		if (equipment[i]) {
			delete equipment[i];
		}
	}
}

Character::Character(std::string const &name) : name(name), count(0) {
	for (int i = 0; i < 4; i++) {
		equipment[i] = 0;
	}
	std::cout << "* create new character " << name << " *" << std::endl;
}

Character::Character(const Character &copy) {
	operator=(copy);
}

Character&			Character::operator=(const Character &character) {
	if (this != &character) {
		name = character.name;
		count = character.count;
		for (int i = 0; i < 4; i++) {
			equipment[i] = character.equipment[i]->clone();
		}
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
		delete aMateria;
	}
}

void				Character::unequip(int idx) {
	if (equipment[idx]) {
		std::cout << "* " << name << " unequiped with " << equipment[idx]->getType() << " *" << std::endl;
		delete equipment[idx];
		equipment[idx] = 0;
	}
}

void				Character::use(int idx, ICharacter& target) {
	if (equipment[idx])
		equipment[idx]->use(target);
	else
		std::cout << "* unkhown equipment *" << std::endl;
}