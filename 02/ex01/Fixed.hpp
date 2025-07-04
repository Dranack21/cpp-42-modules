#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int _fixed_value;
		static const int _fractionalbits = 8;
	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float f);
		~Fixed();
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &other);

		int getRawBits(void)const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt (void)const;
} ;


std::ostream& operator<<(std::ostream& out, const Fixed& value);

#endif