#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() {
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator() {
	std::cout << "I’ll be back..." << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &copy) {
}

AssaultTerminator& AssaultTerminator::operator=(const AssaultTerminator &assaultTerminator) {
	return *this;
}

ISpaceMarine*	AssaultTerminator::clone() const {
	ISpaceMarine *p = new AssaultTerminator;
	return p;
}

void    AssaultTerminator::battleCry() const {
	std::cout <<  "This code is unclean. PURIFY IT!" << std::endl;
}

void	AssaultTerminator::rangedAttack() const {
	std::cout <<  "* does nothing *" << std::endl;
}

void	AssaultTerminator::meleeAttack() const {
	std::cout <<   "* attacks with chainfists *" << std::endl;
}