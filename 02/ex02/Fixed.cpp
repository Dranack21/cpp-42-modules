#include "Fixed.hpp"
#include <iostream>


Fixed::Fixed(): _fixed_value(0)
{
	// std::cout << "Constructor called fixed value set to 0" << std::endl;
}
Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
	this->_fixed_value = n << this->_fractionalbits;
	// std::cout << "Const int constructor called" << std::endl;
}

Fixed::Fixed(const float f)
{
	this->_fixed_value = roundf(f * (1 << this->_fractionalbits));
	// std::cout << "Const float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy; 
}


Fixed &Fixed::operator=(const Fixed &other)
{
	// std::cout << "Fixed overload operator called" << std::endl;
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
	// std::cout << "GetRawBits member function called" << std::endl;
	return (this->_fixed_value);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixed_value = raw;
}

bool Fixed::operator!=(Fixed fixed)const
{
	return (this->toFloat() != fixed.toFloat());
}

bool Fixed::operator==(Fixed fixed)const
{
	return (this->toFloat() == fixed.toFloat());
}

bool Fixed::operator>(Fixed fixed)const
{
	return (this->toFloat() > fixed.toFloat());
}

bool Fixed::operator<(Fixed fixed)const
{
	return (this->toFloat() < fixed.toFloat());
}

bool Fixed::operator<=(Fixed fixed)const
{
	return (this->toFloat() <= fixed.toFloat());
}

bool Fixed::operator>=(Fixed fixed)const
{
	return (this->toFloat() >= fixed.toFloat());
}

Fixed Fixed::operator+(const Fixed& fixed) const 
{
    return Fixed(this->toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed& fixed) const 
{
    return Fixed(this->toFloat() - fixed.toFloat());
}

Fixed Fixed::operator*(const Fixed& fixed) const 
{
    return Fixed(this->toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed& fixed) const 
{
    return Fixed(this->toFloat() / fixed.toFloat());
}


Fixed	Fixed::operator++()
{
	this->_fixed_value++;
	return (*this);
}

Fixed	Fixed::operator--()
{
	this->_fixed_value--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	this->_fixed_value++;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	this->_fixed_value--;
	return (tmp);
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
	if (a < b)
		return a;
	else
		return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	if (a < b)
		return a;
	else
		return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	if (a > b)
		return a;
	else
		return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	if (a > b)
		return a;
	else
		return b;
}


std::ostream& operator<<(std::ostream& out, const Fixed& value)
{
	out << value.toFloat();
	return (out);
}
