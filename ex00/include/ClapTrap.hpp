#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
	private:
		std::string m_name;
		int m_hitPoints = 10;
		int m_energyPoints = 10;
		int m_attackDamage = 0;

		bool ableTo();

	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap& other);
		~ClapTrap();

		ClapTrap& operator=(const ClapTrap& other);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
