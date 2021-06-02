#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : count(0) {
	std::cout << "* create Materia Source *" << std::endl;
	for (int i = 0; i < 4; i++) {
		source[i] = 0;
	}
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (source[i]) {
			delete source[i];
		}
	}
}

MateriaSource::MateriaSource(const MateriaSource &copy) {
	operator=(copy);
}

MateriaSource& MateriaSource::operator=(const MateriaSource &ms) {
	if (this != &ms) {
		for (int i = 0; i < 4; i++) {
			source[i] = ms.source[i];
		}
	}
	return *this;
}

void		MateriaSource::learnMateria(AMateria *aMateria) {
	source[count] = aMateria;
	std::cout << "* learning new Materia " << source[count]->getType() << " *" << std::endl;
	count++;
}

AMateria*	MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < count; i++) {
		if (source[i]->getType() == type) {
			std::cout << "* create Materia " << source[i]->getType() << " *" << std::endl;
			return source[i];
		}
	}
	return 0;
}
