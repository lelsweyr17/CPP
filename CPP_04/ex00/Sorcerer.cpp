#include "Sorcerer.hpp"

Sorcerer::Sorcerer() {
}

Sorcerer::~Sorcerer() {
	std::cout << name << ", " << title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(std::string valueName, std::string valueTitle) : name(valueName), title(valueTitle) {
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer& copy) {
	operator=(copy);
}

Sorcerer&		Sorcerer::operator=(const Sorcerer& sorcerer) {
	if (&sorcerer == this) {
		return *this;
	}	
	name = sorcerer.name;
	title = sorcerer.title;
	return *this;
}

std::ostream	&operator<<(std::ostream &out, const Sorcerer &sorcerer) {
	out << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies!" << std::endl;
	return out;
}

std::string		Sorcerer::getName() const {
	return name;
}

std::string		Sorcerer::getTitle() const {
	return title;
}

void			Sorcerer::polymorph(Victim const &victim) const {
	victim.getPolymorphed();
}