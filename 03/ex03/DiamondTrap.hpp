#pragma once

#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string name;
	public:
		DiamondTrap();
		DiamondTrap(std::string str);
		~DiamondTrap();
		DiamondTrap &operator=(const DiamondTrap &other);
		DiamondTrap(const DiamondTrap &copy);
		using ScavTrap::attack;
		void whoAmI(void);
};