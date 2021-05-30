#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <iostream>
# include "Enemy.hpp"

class RadScorpion : public Enemy {
	public:
		RadScorpion();
		~RadScorpion();
		RadScorpion(int hp, std::string const & type);
		RadScorpion(const RadScorpion& copy);
		RadScorpion& operator=(const RadScorpion& radScorpion);

};

#endif