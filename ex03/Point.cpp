/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrazem <mrazem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 00:46:06 by mrazem            #+#    #+#             */
/*   Updated: 2026/01/09 14:46:16 by mrazem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Point::Point()
: m_x(Fixed(0)), m_y(Fixed(0))
{}

Point::~Point()
{}

Point::Point(const float x, const float y)
: m_x(x), m_y(y)
{}

Point::Point(const Point& original)
	:	m_x(original.m_x),
		m_y(original.m_y)
{
}

Point::Point(const Fixed& x, const Fixed& y)
:m_x(x), m_y(y)
{}

Point& Point::operator=(const Point& original)
{
	(void) original;
	return (*this);
}

bool Point::operator!=(const Point&other)const
{
	if (m_x != other.m_x || m_y != other.m_y)
		return true;
	return false;
}

Fixed Point::cross_product(const Point& a, const Point& b)
{
	return ((a.getX() * b.getY()) - a.getY() * b.getX());
}

Point Point::vec_subtract(const Point &a, const Point& b)
{
	return (Point(b.getX() - a.getX(), b.getY() - a.getY())); 
}

void Point::printCoords()const
{
	std::cout << "Point: (" << m_x << ", " << m_y << ")" <<std::endl;
}

const Fixed& Point::getX()const
{
	return m_x;
}

const Fixed& Point::getY()const
{
	return m_y;
}



std::ostream& operator<<(std::ostream& out, const Point& point)
{
	out << "("
		<< point.getX()
		<< ", "
		<< point.getY()
		<< ")";
	return out;
}
