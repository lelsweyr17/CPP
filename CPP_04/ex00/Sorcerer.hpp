#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"

class Sorcerer {
	public:
		Sorcerer(std::string, std::string);
		~Sorcerer();
		Sorcerer(const Sorcerer& copy);
		Sorcerer& operator=(const Sorcerer& sorcerer);

		std::string	getName() const;
		std::string	getTitle() const;
		void		polymorph(Victim const &victim) const;

	protected:
		Sorcerer();
		std::string name;
		std::string	title;
};

std::ostream	&operator<<(std::ostream &out, const Sorcerer &sorcerer);

#endif