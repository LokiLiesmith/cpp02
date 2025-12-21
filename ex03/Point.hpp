/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrazem <mrazem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 00:46:14 by mrazem            #+#    #+#             */
/*   Updated: 2025/12/22 00:46:15 by mrazem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point
{
	private:
		const Fixed m_x;
		const Fixed m_y;
	
	public:
		Point();
		Point(const float x, const float y);
		Point(const Point& original);
		Point(const Fixed& x, const Fixed& y);
		~Point();
		Point& operator=(const Point& original);
		bool operator!=(const Point& other)const;
		
		static Fixed cross_product(const Point& a, const Point& b);
		static Point vec_subtract(const Point& a, const Point& b);
		
		const Fixed& getX() const;
		const Fixed& getY() const;

		void printCoords()const;
};

bool	bsp(const Point& a, const Point& b, const Point& c, const Point& point);
Fixed calculate_cross(const Point& a, const Point& b, const Point& point);
std::ostream& operator<<(std::ostream& out, const Point& point);

#endif