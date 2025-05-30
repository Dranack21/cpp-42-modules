#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string str): ClapTrap(str)
{
	std::cout << "ScavTrap construtor with name has been called " << std::endl;
	this->_Hit_points = 100;
	this->_Energy_points = 50;
	this->_Attack_damage = 20;
	this->_guarding_gate = false;
}

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "ScavTrap Default constructor has been called " << std::endl;
	this->_Hit_points = 100;
	this->_Energy_points = 50;
	this->_Attack_damage = 20;
	this->_guarding_gate = false;
}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor has been called " << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
	this->_Name = other._Name;
	this->_Attack_damage = other._Attack_damage;
	this->_Hit_points = other._Hit_points;
	this->_Energy_points = other._Energy_points;
	this->_guarding_gate = other._guarding_gate;
	return (*this);
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy)
{
	this->_guarding_gate = copy._guarding_gate;
	std::cout << "Scav Trap Copy constructor has been called " << std::endl;
}

void ScavTrap::guardGate()
{
	if (this->_guarding_gate == false)
	{
		this->_guarding_gate = true;
		std::cout << this->_Name << " is now guarding the gate." << std::endl;
	}
	else
	std::cout  << this->_Name << " is already guarding the gate." << std::endl;
}

void ScavTrap::attack(const std::string &target)
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
	std::cout << "SCAVTrap " << this->_Name << " attacks " << target << " causing " << this->_Attack_damage << " damage ! " << std::endl ;
	this->_Energy_points--;
}