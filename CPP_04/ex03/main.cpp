#include "ICharacter.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());

	ICharacter *mutant = new Character("Mutant");

	ICharacter *a = mutant;

	AMateria* tmp;
	tmp = src->createMateria("ice");
	mutant->equip(tmp);
	tmp = src->createMateria("cure");
	mutant->equip(tmp);
	tmp = src->createMateria("ice");
	mutant->equip(tmp);
	tmp = src->createMateria("ice");
	mutant->equip(tmp);

	ICharacter *bob = new Character("bob");

	src->learnMateria(new Cure());
	src->learnMateria(new Ice());

	std::cout  << std::endl;
	tmp = src->createMateria("ice");
	bob->equip(tmp);
	std::cout  << std::endl;
	tmp = src->createMateria("cure");
	bob->equip(tmp);
	std::cout  << std::endl;
	tmp = src->createMateria("cure");
	bob->equip(tmp);
	std::cout  << std::endl;
	tmp = src->createMateria("cure");
	bob->equip(tmp);
	std::cout  << std::endl;
	tmp = src->createMateria("cure");
	bob->equip(tmp);
	std::cout  << std::endl;
	bob->unequip(3);

	std::cout  << std::endl;

	mutant->use(0, *a);
	mutant->use(1, *a);

	bob->use(1, *mutant);
	bob->use(0, *mutant);
	bob->use(3, *mutant);
    bob->use(2, *mutant);

	delete bob;
	delete mutant;
	delete src;

	return 0;
}