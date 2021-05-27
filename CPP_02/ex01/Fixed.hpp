#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
	public:
		Fixed();
		Fixed(int n);
		Fixed(float n);
		~Fixed();
		Fixed(const Fixed &fixed);
		Fixed	&operator=(const Fixed &fixed);

		int		toInt(void) const;
		float	toFloat(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int					_intFix;
		static const int	_frBits = 8;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed);

#endif