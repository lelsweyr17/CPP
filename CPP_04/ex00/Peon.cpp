#include "Peon.hpp"

Peon::Peon() {
}

Peon::~Peon() {
    std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(std::string nameValue) : Victim(nameValue) {
    std::cout <<  "Zog zog." << std::endl;
}

Peon::Peon(const Peon& copy) : Victim(copy) {
}

Peon&   Peon::operator=(const Peon& peon) {
    if (&peon == this) {
		return *this;
    }
	name = peon.name;
	return *this;
}

void	Peon::getPolymorphed() const {
    std::cout << name << " has been turned into a pink pony!" << std::endl;
}