/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrazem <mrazem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 00:46:08 by mrazem            #+#    #+#             */
/*   Updated: 2025/12/22 00:46:21 by mrazem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::_frBits = 8;

Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	_fp = 0;
}

Fixed:: ~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& original)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = original;
}

Fixed& Fixed::operator=(const Fixed& original)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if(this != &original)
		_fp = original.getRawBits();
	return *this;
}

Fixed  Fixed::operator*(const Fixed& factor) const
{
	Fixed result;

	result.setRawBits((getRawBits() * factor.getRawBits()) >> _frBits);
	return result;
}

Fixed Fixed::operator+(const Fixed& add) const
{
	Fixed result;

	result.setRawBits((getRawBits() + add.getRawBits()));
	return result;
}

Fixed Fixed::operator-(const Fixed& sub) const
{
	Fixed result;

	result.setRawBits(getRawBits() - sub.getRawBits());
	return result;
}



// INCREMENT / DECREMENT
Fixed& Fixed::operator++()
{
	++_fp;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	
	_fp += 1;
	return tmp;
}

Fixed& Fixed::operator--()
{
	--_fp;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);

	_fp -= 1;
	return tmp;
}

//COMPARISON OPERATORS

bool Fixed::operator>(const Fixed& other) const
{
	if (_fp > other._fp)
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed& other) const
{
	if (_fp >= other._fp)
		return (true);
	return (false);
}

bool Fixed::operator<(const Fixed& other) const
{
	if (_fp < other._fp)
		return true;
	return false;
}

bool Fixed::operator<=(const Fixed& other) const
{
	if (_fp <= other._fp)
		return true;
	return false;
}

bool Fixed::operator==(const Fixed& other) const
{
	if (_fp == other._fp)
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed& other) const
{
	if (_fp == other._fp)
		return (false);
	return (true);
}

// Public Funcs
Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return a;
	return b;
}
const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return a;
	return b;
}
Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return a;
	return b;
}
const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return a;
	return b;	
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
	return (static_cast<float>(_fp) /(1 << _frBits));
}

int	Fixed::getRawBits() const
{
	return (_fp);
}

void Fixed::setRawBits(const int raw)
{
	_fp = raw;
}



