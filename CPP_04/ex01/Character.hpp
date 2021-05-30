#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character {
	public:
		Character();
		~Character();
		Character(std::string const &name);
		Character(const Character& copy);
		Character& operator=(const Character& character);

		void				recoverAP();
		void				equip(AWeapon*);
		void				attack(Enemy*);
		std::string const	getName() const;
		unsigned int		getAP() const;
		AWeapon				*getAWeapon() const;

	private:
		std::string		name;
		AWeapon			*weapon;
		unsigned int	ap;
};

std::ostream	&operator<<(std::ostream &out, const Character &character);

#endif