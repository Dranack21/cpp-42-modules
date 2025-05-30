#include "DiamondTrap.hpp"

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
		// for (int i = 0; i < 12; i++)
		// 	b.attack("Cody-clone");
		b.beRepaired(3);
	}
	{
		std::cout << "### TESTING SCAVTRAP ###\n" << std::endl;
		ScavTrap c;
		ScavTrap d("Savage");
		c.attack("CloneTrap");
		// for (int i = 0; i < 50; i++)
		// 	c.attack("CloneTrap");
		c.beRepaired(22);
		c.takeDamage(21);
		c.beRepaired(22);
		c.guardGate();
		c.guardGate();
		d.attack("Savage-clone");
		d.takeDamage(101);
		d.takeDamage(15);
		d.attack("Le mastermind");
	}
	{
		std::cout << "### TESTING FRAGTRAP ###\n" << std::endl;
		FragTrap e;
		FragTrap f("sinj");
		e.highFiveGuys();
		e.attack("l'electricien");
		e.takeDamage(101);
		e.takeDamage(1);
		e.attack("some random dude");
		f.highFiveGuys();
		// for(int i = 0; i < 101; i++)
		// 	f.attack("FragTrap-clone");
	}
	std::cout << "\n\n### TESTING DIAMONDTRAP ###\n" << std::endl;
	{
		DiamondTrap a("oupergouper");
		// DiamondTrap b("Bob");
		DiamondTrap c(a);
		// a.whoAmI();
		// a.attack("oupi goupi");
		// b.whoAmI();
		// b.attack("Other clone");
		a.whoAmI();
		c.whoAmI();
	}
	return (0);
}