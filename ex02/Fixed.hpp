/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrazem <mrazem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 13:27:46 by mrazem            #+#    #+#             */
/*   Updated: 2026/01/09 14:33:15 by mrazem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>

class	Fixed

{
	private:
		static const int _frBits;
		int _fp;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed& original);

		Fixed(float f);
		Fixed(int n);

		Fixed&	operator= (const Fixed& original);
		Fixed	operator*(const Fixed& factor) const;
		Fixed	operator+(const Fixed& add) const;
		Fixed	operator-(const Fixed& sub) const;
		Fixed	operator/(const Fixed& div) const;
		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);

		bool	operator>(const Fixed& other)const;
		bool	operator>=(const Fixed& other)const;
		bool	operator<(const Fixed& other)const;
		bool	operator<=(const Fixed& other)const;
		bool	operator==(const Fixed& other)const;
		bool	operator!=(const Fixed& other)const;

		static Fixed& min(Fixed& a, Fixed& b);
		static const Fixed&	min(const Fixed& a, const Fixed&b);
		
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);


		float	toFloat(void) const;
		int		toInt(void) const;

		int		getRawBits() const;
		void	setRawBits(const int raw);
};

std::ostream& operator<<(std::ostream& out, const Fixed& Fixed);


#endif