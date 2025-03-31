#include <iostream>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	// ClapTrap *scavTrap = new ScavTrap("<scav_trap_name>");
	// scavTrap->attack("<target>");
	// delete scavTrap;

	FragTrap fragTrap("<frag_trap_name>");
	fragTrap.attack("<target_name>");
	fragTrap.highFivesGuys();

	return 0;
}
