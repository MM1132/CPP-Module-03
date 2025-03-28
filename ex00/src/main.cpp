#include <iostream>

#include "ClapTrap.hpp"

int main()
{
	std::cout << "Our awesome program is running!" << std::endl;

	ClapTrap clap1("Clap1");
	ClapTrap clap2("Clap2");

	clap1.attack("Clap2");
	clap2.takeDamage(0);
	clap2.beRepaired(5);

	ClapTrap clapTrapCopy = ClapTrap(clap1);
	clap1 = clap2;

	return 0;
}
