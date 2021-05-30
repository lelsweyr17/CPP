#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "SuperMutant")
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(int hp, std::string const & type) : Enemy(hp, type)
{
}

SuperMutant::SuperMutant(const SuperMutant& copy) : Enemy(copy)
{
}

SuperMutant&	SuperMutant::operator=(const SuperMutant& superMutant)
{
	if (this == &superMutant) {
		hp = superMutant.hp;
		type = superMutant.type;
	}
	return *this;
}

void	SuperMutant::takeDamage(int hpReduce)
{
	if (hpReduce >= 0) {
		hp = (hp - (hpReduce - 3) <= 0) ? 0 : (hp - (hpReduce - 3));
	}
}