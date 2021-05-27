#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	private:
		int					_intFix;
		static const int	_frBits;

	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &fixed);
		Fixed	&operator=(const Fixed &fixed);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif