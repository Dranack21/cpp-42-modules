#ifndef CLAP_Trap_HPP
# define CLAP_Trap_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string _Name;
		int _Hit_points;
		int _Energy_points;
		int _Attack_damage;

	public:
		ClapTrap();
		ClapTrap(std::string Name);
		~ClapTrap();
	
		ClapTrap(const ClapTrap &copy);
		ClapTrap &operator=(const ClapTrap &other);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

};

#endif