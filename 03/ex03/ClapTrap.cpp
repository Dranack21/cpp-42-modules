#include "ClapTrap.hpp"

ClapTrap::ClapTrap():_Name("empty"),  _Hit_points(10), _Energy_points(10), _Attack_damage(0)
{
	std::cout << "Default ClapTrap Constructor has been called " << std::endl;
}

ClapTrap::ClapTrap(std::string str): _Name(str), _Hit_points(10), _Energy_points(10), _Attack_damage(0)
{
	std::cout << "ClapTrap Constructor with name in parameters has been called " << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor has been called " << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap Copy constructor has been called " << std::endl;
	*this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap Assignation operator called " << std::endl;
	this->_Attack_damage = other._Attack_damage;
	this->_Energy_points = other._Energy_points;
	this->_Hit_points = other._Hit_points;
	this->_Name = other._Name;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_Energy_points == 0)	
	{
		std::cout << "No energy points left cannot act " << std::endl;
		return ;
	}
	if (this->_Hit_points == 0)
	{
		std::cout << "No Health left cannot act " << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_Name << " attacks " << target << " causing " << this->_Attack_damage << " damage ! " << std::endl ;
	this->_Energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_Hit_points != 0)
	{
		this->_Hit_points = this->_Hit_points - amount;
		std::cout << this->_Name << " took " << amount << " damage " << "and now has " << this->_Hit_points << " Hit points"<< std::endl;
		if (this->_Hit_points < 0)
			this->_Hit_points = 0;
	}
	else
		std::cout << "You tried to damage "<<this->_Name <<" but it's alredy dead" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_Energy_points > 0 && this->_Hit_points > 0)
	{
		this->_Hit_points = this->_Hit_points + amount;
		if (this->_Hit_points < 0)
			this->_Hit_points = 0;
		std::cout << this->_Name << " repaired " << amount << " hit points " << "and now has " << this->_Hit_points << " Hitpoints" << std::endl;
		this->_Energy_points--;
	}
	else if (this->_Energy_points == 0)
	{
		std::cout << this->_Name << "Has no energy points left and cannot repair itself  " << std::endl;
	}
	else if (this->_Hit_points == 0)
	{
		std::cout << this->_Name << "Has no hit points left and cannot repair itself  " << std::endl;
	}
}