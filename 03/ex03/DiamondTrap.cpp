#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("default_clap_name")
{
	std::cout << "Diamond trap constructor called" << std::endl;
	this->name ="default";
	this->_Hit_points = FragTrap::_Hit_points;
	this->_Attack_damage = FragTrap::_Attack_damage;
	this->_Energy_points = ScavTrap::_Energy_points;
}

DiamondTrap::DiamondTrap(std::string str): ClapTrap(str + "_clap_name")
{
	std::cout << "Diamond trap constructor with name called" << std::endl;
	this->name = str;
	this->_Hit_points = FragTrap::_Hit_points;
	this->_Attack_damage = FragTrap::_Attack_damage;
	this->_Energy_points = ScavTrap::_Energy_points;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}
DiamondTrap::DiamondTrap(const DiamondTrap &copy): ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	*this = copy;
	std::cout << "DiamondTrap Copy Constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "DiamondTrap overload operator called" << std::endl;
	this->name = other.name;
	this->_Attack_damage = other._Attack_damage;
	this->_Hit_points = other._Hit_points;
	this->_Energy_points = other._Energy_points;
	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << this->name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::_Name << std::endl;
}