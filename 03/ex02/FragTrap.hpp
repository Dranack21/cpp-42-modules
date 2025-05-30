#pragma once

#include "ScavTrap.hpp"


class FragTrap : public ClapTrap
{
	private:
	public:
		FragTrap();
		void highFiveGuys(void);
		FragTrap(std::string str);
		FragTrap(const FragTrap &copy);
		FragTrap &operator=(const FragTrap &other);
		void attack(const std::string &target);
		~FragTrap();
};