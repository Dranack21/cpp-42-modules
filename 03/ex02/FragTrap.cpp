#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "Default FragTrap Constructor has been called " << std::endl;
	this->_Hit_points = 100;
	this->_Energy_points = 100;
	this->_Attack_damage = 30;
}

FragTrap::FragTrap(std::string str): ClapTrap(str)
{
	std::cout << "FragTrap Constructor with name has been called " << std::endl;
	this->_Hit_points = 100;
	this->_Energy_points = 100;
	this->_Attack_damage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "Default FragTrap Destructor has been called " << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	this->_Attack_damage = other._Attack_damage;
	this->_Hit_points = other._Hit_points;
	this->_Name = other._Name;
	return (*this);
}

void FragTrap::attack(const std::string &target)
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
	std::cout << "FragTrap " << this->_Name << " attacks " << target << " causing " << this->_Attack_damage << " damage ! " << std::endl ;
	this->_Energy_points--;
}

void FragTrap::highFiveGuys()
{
	std::cout << "Hey ! Let's high five !" << std::endl;
}