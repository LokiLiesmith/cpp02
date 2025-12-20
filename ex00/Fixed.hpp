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