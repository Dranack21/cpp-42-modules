#pragma once

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	private:
		bool _guarding_gate;
	public:
		ScavTrap(const ScavTrap &copy);
		ScavTrap &operator=(const ScavTrap &other);
		void attack(const std::string& target);
		ScavTrap(std::string Name);
		ScavTrap();
		~ScavTrap();
		void guardGate();
};

