#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon{
	public:
		PlasmaRifle();
		~PlasmaRifle();
		PlasmaRifle(std::string const &name, int apcost, int damage);
		PlasmaRifle(const PlasmaRifle& copy);
		PlasmaRifle& operator=(const PlasmaRifle& plasmaRifle);

		virtual	void	attack() const;
};

#endif 