#include "Fixed.hpp"
#include <iostream>


Fixed::Fixed(): _fixed_value(0)
{
	std::cout <<"Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy; 
}


Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_fixed_value = other._fixed_value;
	}
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


int Fixed::getRawBits()const
{
	std::cout << "GetRawBits member function called" << std::endl;
	return (this->_fixed_value);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixed_value = raw;
}
