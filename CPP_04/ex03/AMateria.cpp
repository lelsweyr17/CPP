#include "AMateria.hpp"

AMateria::AMateria() {

}

AMateria::~AMateria() {

}

AMateria::AMateria(std::string const &type) : xp(0), type(type) {

}

AMateria::AMateria(const AMateria &copy) {
	(operator=(copy));
}

AMateria& AMateria::operator=(const AMateria &aMateria) {
	if (this != &aMateria) {
		xp = aMateria.xp;
		type = aMateria.type;
	}
	return *this;
}

std::string const   &AMateria::getType() const {
	return type;
}

unsigned int    	AMateria::getXP() const {
	return xp;
}

// void        		AMateria::use(ICharacter& target) {
// 	xp += 10;
// }