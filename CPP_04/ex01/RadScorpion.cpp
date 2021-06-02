#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "Rad Scorpion") {
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion() {
    std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(int hp, std::string const & type) : Enemy(hp, type) {
}

RadScorpion::RadScorpion(const RadScorpion& copy) : Enemy(copy) {
}

RadScorpion&	RadScorpion::operator=(const RadScorpion& radScorpion) {
	if (this != &radScorpion) {
		hp = radScorpion.hp;
		type = radScorpion.type;
	}
	return *this;
}