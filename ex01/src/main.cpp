#include <iostream>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap *scavTrap = new ScavTrap("<scav_trap_name>");
	scavTrap->attack("<target>");

	delete scavTrap;

	return 0;
}
