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
		bool operator>(Fixed fixed)const;
		bool operator<(Fixed fixed)const;
		bool operator>=(Fixed fixed)const;
		bool operator<=(Fixed fixed)const;
		bool operator==(Fixed fixed)const;
		bool operator!=(Fixed fixed)const;

		// Arithmetic Operators
		Fixed operator+(const Fixed& fixed) const;
		Fixed operator-(const Fixed& fixed) const;
		Fixed operator*(const Fixed& fixed) const;
		Fixed operator/(const Fixed& fixed) const;
		// pre-increment Operators
		Fixed operator++();
		Fixed operator--();
		// post-increment Operators
		Fixed operator++(int);
		Fixed operator--(int);
		static Fixed& min(Fixed& a, Fixed& b);
    	static const Fixed& min(const Fixed& a, const Fixed& b);
    	static Fixed& max(Fixed& a, Fixed& b);
    	static const Fixed& max(const Fixed& a, const Fixed& b);

} ;


std::ostream& operator<<(std::ostream& out, const Fixed& value);

#endif