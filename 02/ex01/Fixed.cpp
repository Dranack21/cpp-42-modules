#include "Fixed.hpp"
#include <iostream>


Fixed::Fixed(): _fixed_value(0)
{
	std::cout << "Constructor called fixed value set to 0" << std::endl;
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
	this->_fixed_value = n << this->_fractionalbits;
	std::cout << "Const int constructor called" << std::endl;
}

Fixed::Fixed(const float f)
{
	this->_fixed_value = roundf(f * (1 << this->_fractionalbits));
	std::cout << "Const float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy; 
}


Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Fixed overload operator called" << std::endl;
	if (this != &other)
	{
		this->_fixed_value = other._fixed_value;
	}
	return *this;
}

float Fixed::toFloat() const 
{
    return (float)this->_fixed_value / (1 << this->_fractionalbits);
}

int Fixed::toInt() const
{
	 return(this->_fixed_value >> this->_fractionalbits);
}

int Fixed::getRawBits() const
{
	std::cout << "GetRawBits member function called" << std::endl;
	return (this->_fixed_value);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixed_value = raw;
}

std::ostream& operator<<(std::ostream& out, const Fixed& value)
{
	out << value.toFloat();
	return (out);
}
