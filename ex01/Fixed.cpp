#include "Fixed.hpp"
#include <cmath>

const int Fixed::_frBits = 8;

Fixed::Fixed()
{
	_fp = 0;
}

Fixed::~Fixed()
{}

Fixed::Fixed(const Fixed& original)
	:_fp(original._fp)
{}

Fixed& Fixed::operator=(const Fixed& original)
{
	if(this != &original)
		_fp = original.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream& out, const Fixed& stored)
{
	out << stored.toFloat();
	return out;
}

Fixed::Fixed(float f)
{
	_fp = roundf(f * (1 << _frBits));
}
Fixed::Fixed(int n)
{
	_fp = n << _frBits;
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(_fp) / (1 << _frBits));
}

int	Fixed::toInt(void) const
{
	return (_fp >> _frBits);
}

int Fixed::getRawBits()const
{
	return (_fp);
}

void Fixed::setRawBits(const int raw)
{
	_fp = raw;
}

