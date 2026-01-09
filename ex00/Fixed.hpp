/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrazem <mrazem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 13:28:04 by mrazem            #+#    #+#             */
/*   Updated: 2026/01/09 13:28:05 by mrazem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	static const int _rawBits;
	
	private:
		int	_fp;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed& original);
		Fixed& operator=(const Fixed& original);

		int getRawBits() const;
		void setRawBits(int const raw);
};

#endif