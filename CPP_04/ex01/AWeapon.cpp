 #include "AWeapon.hpp"

AWeapon::AWeapon() {
}

AWeapon::~AWeapon() {
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : name(name), apCost(apcost), damage(damage) {
}

AWeapon::AWeapon(const AWeapon& copy) {
	operator=(copy);
}

AWeapon&			AWeapon::operator=(const AWeapon& aWeapon) {
	if (&aWeapon != this) {
		name = aWeapon.name;
		damage = aWeapon.damage;
		apCost = aWeapon.apCost;
	}
	return *this;
}

int		        	AWeapon::getAPCost() const {
	return apCost;
}

int		        	AWeapon::getDamage() const {
	return damage;
}

std::string const   AWeapon::getName() const {
	return name;
}
