#include "ScavTrap.hpp"

int main()
{
	std::cout << "### TESTING CLAPTrap ###\n" << std::endl;
	{
		ClapTrap a;
		ClapTrap b("Cody");

		a.attack("some other robot");
		a.takeDamage(10);
		a.takeDamage(10);
		a.beRepaired(5);
		a = b;
		a.attack("some other other robot");
		b.beRepaired(3);
		for (int i = 0; i < 12; i++)
			b.attack("Cody-clone");
		b.beRepaired(3);
	}
	std::cout << "\n\n### TESTING SCAVTrap ###\n" << std::endl;
	{
		ScavTrap c;
		ScavTrap d("Savage");
		c.attack("CloneTrap");
		for (int i = 0; i < 50; i++)
			c.attack("CloneTrap");
		c.beRepaired(22);
		c.takeDamage(21);
		c.beRepaired(22);
		c.guardGate();
		c.guardGate();
		d.attack("Savage-clone");
		d.takeDamage(101);
		d.takeDamage(15);
		d.attack("ScavTrap-clone");
	}
	return (0);
}