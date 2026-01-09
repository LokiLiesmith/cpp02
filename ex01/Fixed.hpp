/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrazem <mrazem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 03:55:47 by mrazem            #+#    #+#             */
/*   Updated: 2026/01/09 13:56:31 by mrazem           ###   ########.fr       */
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

		Fixed& operator= (const Fixed& original);

		float	toFloat(void) const;
		int		toInt(void) const;

		int		getRawBits() const;
		void	setRawBits(const int raw);
};

std::ostream& operator<<(std::ostream& out, const Fixed& stored);

#endif


