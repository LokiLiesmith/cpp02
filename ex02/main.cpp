#include "Fixed.hpp"
#include <iostream>

int main( void )
{
	Fixed a;

	//Standard math operators
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const b2( Fixed( 5.05f ) + Fixed( 2 ) );
	Fixed const b3( Fixed( 5.05f ) - Fixed( 2 ) );
	Fixed const b4( Fixed( 5.05f ) - Fixed(0.5f) );
		
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << b2 << std::endl;
	std::cout << b3 << std::endl;
	std::cout << b4 << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}