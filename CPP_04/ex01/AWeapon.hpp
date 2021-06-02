#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon {
	public:
		AWeapon();
		virtual ~AWeapon();
		AWeapon(std::string const &name, int apcost, int damage);
		AWeapon(const AWeapon& copy);
		AWeapon& operator=(const AWeapon& aWeapon);

		int					getAPCost() const;
		int					getDamage() const;
		virtual	void		attack() const = 0;
		std::string	const	getName() const;

	protected:
		std::string			name;
		unsigned int		damage;
		unsigned int		apCost;
};

#endif