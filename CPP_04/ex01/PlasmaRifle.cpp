#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {
}

PlasmaRifle::~PlasmaRifle() {
}

PlasmaRifle::PlasmaRifle(std::string const &name, int apcost, int damage) : AWeapon(name, apcost, damage) {
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& copy) : AWeapon(copy) {
}

PlasmaRifle&    PlasmaRifle::operator=(const PlasmaRifle& plasmaRifle) {
    if (&plasmaRifle != this) {
        name = plasmaRifle.name;
        damage = plasmaRifle.damage;
        apCost = plasmaRifle.apCost;
    }
    return *this;
}

void            PlasmaRifle::attack() const {
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}