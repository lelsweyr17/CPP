#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {
}

PowerFist::~PowerFist() {
}

PowerFist::PowerFist(std::string const &name, int apcost, int damage) : AWeapon(name, apcost, damage) {
}

PowerFist::PowerFist(const PowerFist& copy) : AWeapon(copy) {
}

PowerFist&    PowerFist::operator=(const PowerFist& powerFist) {
    if (&powerFist != this) {
        name = powerFist.name;
        damage = powerFist.damage;
        apCost = powerFist.apCost;
    }
    return *this;
}

void            PowerFist::attack() const {
    std::cout << "* pschhh... SBAM! *" << std::endl;
}