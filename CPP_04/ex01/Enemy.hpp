#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy {
	public:
		Enemy();
		virtual ~Enemy();
		Enemy(int hp, std::string const & type);
		Enemy(const Enemy& copy);
		Enemy& operator=(const Enemy& enemy);

		int					getHP() const;
		virtual void		takeDamage(int);
		std::string const	getType() const;
		
	protected:
		unsigned int	hp;
		std::string		type;
};

#endif