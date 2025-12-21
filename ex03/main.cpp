/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrazem <mrazem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 00:46:00 by mrazem            #+#    #+#             */
/*   Updated: 2025/12/22 00:46:01 by mrazem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

int main(void)
{
	Point a(0, 3);
	Point b;
	Point c(4, 0);
	
	a.printCoords();
	b.printCoords();
	c.printCoords();
	
	//equality checks
	// bool diff = a!=b;
	// bool equal = a!=a;
	
	//CHANGE THIS POINT
	Point point(1,1);

	if(bsp(a, b, c, point))
	{
		std::cout << "The point: "
			<< point
			<< " is inside the triangle."
			<< std::endl;
	}
	else
	{
		std::cout << "The point: "
			<< point
			<< " is NOT inside the triangle."
			<< std::endl;
	}
	return 0;
}