#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {

private:
	std::string	_type;

public:
	Weapon();
	~Weapon();

	Weapon(std::string valueType);

	void		setType(std::string valueType);
	std::string &getType();
};

#endif