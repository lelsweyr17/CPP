#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {
	public:
		Weapon();
		~Weapon();

		Weapon(std::string valueType);

		void		setType(std::string valueType);
		std::string &getType();

	private:
		std::string	_type;
};

#endif