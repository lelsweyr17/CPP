#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"

class Character : public ICharacter {
	public:
		Character();
		~Character();
		Character(std::string const &name);
		Character(const Character&);
		Character& operator=(const Character&);

		virtual std::string const	&getName() const;
		virtual void 		equip(AMateria* m);
		virtual void 		unequip(int idx);
		virtual void 		use(int idx, ICharacter& target);

	private:
		std::string	name;
		AMateria	*equipment[4];
		int			count;
};

#endif