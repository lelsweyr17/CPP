#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim {
	public:
		virtual ~Victim();
		Victim(std::string);
		Victim(const Victim& copy);
		Victim& operator=(const Victim& victim);

		std::string		getName() const;
		virtual void	getPolymorphed() const;

	protected:
		Victim();
		std::string	name;
};

std::ostream	&operator<<(std::ostream &out, const Victim &victim);

#endif 