#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#include <string>

class FragTrap: public ClapTrap
{
	private:
	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap& src);
		~FragTrap();
		FragTrap& operator=(const FragTrap& other);

		// Special abilities
		void highFivesGuys(void);
};

#endif
