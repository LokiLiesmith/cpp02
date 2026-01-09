/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrazem <mrazem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 00:46:00 by mrazem            #+#    #+#             */
/*   Updated: 2026/01/09 14:58:09 by mrazem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

static void test_case(const char* label,
                      const Point& a,
                      const Point& b,
                      const Point& c,
                      const Point& p)
{
    std::cout << label << " | point " << p << " -> ";
    if (bsp(a, b, c, p))
        std::cout << "INSIDE";
    else
        std::cout << "OUTSIDE";
    std::cout << std::endl;
}

int main(void)
{
    // Triangle
    Point a(0, 3);
    Point b(0, 0);
    Point c(4, 0);

    std::cout << "Triangle vertices:\n";
    std::cout << "A " << a << "\n";
    std::cout << "B " << b << "\n";
    std::cout << "C " << c << "\n\n";

    // 1) Inside point
    test_case("Inside", a, b, c, Point(1, 1));

    // 2) Outside point
    test_case("Outside", a, b, c, Point(4, 4));

    // 3) On edge (must be false)
    test_case("On edge", a, b, c, Point(2, 0));

    // 4) On vertex (must be false)
    test_case("On vertex", a, b, c, Point(0, 0));

    // 5) Very close to edge (precision check)
    test_case("Near edge", a, b, c, Point(0.01f, 0.01f));

    // 6) Reverse winding order (orientation independence)
    test_case("Reverse order", a, c, b, Point(1, 1));

    return 0;
}
