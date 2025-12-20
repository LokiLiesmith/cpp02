#include "Fixed.hpp"
#include  <iostream>
const int Fixed::_rawBits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
	: _fp(other._fp)
{
	std::cout << "Copy constructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_rawBits);
}