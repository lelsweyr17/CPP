#include "Fixed.hpp"

Fixed::Fixed() : _intFix(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) : _intFix(fixed._intFix)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(int n)
{
	_intFix = n << _frBits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float n)
{
	_intFix = n * (float)(1 << _frBits);
	std::cout << "Float constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_intFix = fixed._intFix;
	return *this;
}

int		Fixed::getRawBits(void) const
{
	return _intFix;
}

void	Fixed::setRawBits(int const raw)
{
	_intFix = raw;
}

int		Fixed::toInt(void) const
{
	return _intFix >> _frBits;
}

float	Fixed::toFloat(void) const
{
	return (float)(_intFix / (float)(1 << _frBits));
}

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}