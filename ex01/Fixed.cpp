/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrazem <mrazem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 03:55:55 by mrazem            #+#    #+#             */
/*   Updated: 2025/12/21 04:14:47 by mrazem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::_frBits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_fp = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// Fixed::Fixed(const Fixed& original)
// 	:_fp(original._fp)
// {
// 	std::cout << "Copy constructor called" << std::endl;
// }

Fixed::Fixed(const Fixed& original)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = original;
}

Fixed& Fixed::operator=(const Fixed& original)
{
	std::cout << "Copy assignment operator called" << std::endl;
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
	std::cout << "Float constructor called" << std::endl;
	_fp = roundf(f * (1 << _frBits));
}
Fixed::Fixed(int n)
{
	std::cout << "Int constructor called" << std::endl;
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

