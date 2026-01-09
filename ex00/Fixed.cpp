/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrazem <mrazem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 13:28:08 by mrazem            #+#    #+#             */
/*   Updated: 2026/01/09 13:37:43 by mrazem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include  <iostream>
const int Fixed::_rawBits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_fp = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& original)
	: _fp(original._fp)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& original)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &original)
		_fp = original.getRawBits();
	return (*this);
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fp);
}

void Fixed::setRawBits(int const raw)
{
	_fp = raw;
}