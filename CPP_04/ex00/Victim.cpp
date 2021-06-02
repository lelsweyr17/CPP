#include "Victim.hpp"

Victim::Victim() {
}

Victim::~Victim() {
    std::cout << "Victim " << name << " just died for no apparent reason!" << std::endl;
}

Victim::Victim(std::string valueName) : name(valueName) {
    std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim& copy) {
	operator=(copy);
	std::cout << "I'm copy of " << name << "!" << std::endl;
}

Victim&			Victim::operator=(const Victim& victim) {
	if (&victim == this) {
		return *this;
	}	
	name = victim.name;
	return *this;
}

std::ostream	&operator<<(std::ostream &out, const Victim &victim) {
	out << "I am " << victim.getName() << " and I like otters!" << std::endl;
	return out;
}

std::string		Victim::getName() const {
	return name;
}

void			Victim::getPolymorphed() const {
	std::cout << name << " has been turned into a cute little sheep!" << std::endl;
}
