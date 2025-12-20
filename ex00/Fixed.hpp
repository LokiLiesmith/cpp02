#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		static const int _rawBits;
		int	_fp;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed& other);

		int getRawBits() const;
};

#endif