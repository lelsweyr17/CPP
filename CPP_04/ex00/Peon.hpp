#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include "Victim.hpp"

class Peon : public Victim {
	public:
		~Peon();
		Peon(std::string);
		Peon(const Peon& copy);
		Peon& operator=(const Peon& peon);

		virtual void	getPolymorphed() const;
	
	private:
		Peon();

};


#endif 