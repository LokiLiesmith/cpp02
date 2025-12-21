/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrazem <mrazem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 00:46:03 by mrazem            #+#    #+#             */
/*   Updated: 2025/12/22 00:46:04 by mrazem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"


Fixed calculate_cross(const Point& a, const Point& b, const Point& point)
{
	Point AB(Point::vec_subtract(a,b));
	Point AP(Point::vec_subtract(a, point));
	return (Point::cross_product(AB, AP));
}

bool	bsp(const Point& a, const Point& b, const Point& c, const Point& point)
{
	Fixed cross1 = calculate_cross(a, b, point);
	Fixed cross2 = calculate_cross(b, c, point);
	Fixed cross3 = calculate_cross(c, a, point);

	bool all_positive =
		cross1 > 0 && cross2 > 0 && cross3 > 0;
	
	bool all_negative =
		cross1 < 0 && cross2 < 0 && cross3 < 0;
		
	return (all_negative || all_positive);
}