#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>
# include "AWeapon.hpp"

class PowerFist : public AWeapon{
	public:
		PowerFist();
		~PowerFist();
		PowerFist(std::string const &name, int apcost, int damage);
		PowerFist(const PowerFist& copy);
		PowerFist& operator=(const PowerFist& powerFist);

		virtual	void	attack() const;
};

#endif 