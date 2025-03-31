#include "ClapTrap.hpp"
#include "FragTrap.hpp"

#include <iostream>
#include <string>

FragTrap::FragTrap(std::string name):
	ClapTrap(name)
{
	std::cout << "FragTrap's name constructors" << std::endl;
	this->m_hitPoints = 100;
	this->m_energyPoints = 100;
	this->m_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& src):
	ClapTrap(src)
{
	std::cout << "FragTrap being constructed using the copy constructor" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap is being deconstructed :c" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	std::cout << "FragTrap's copy-assignment operator being called" << std::endl;
	if (this != &other)
	{
		this->m_attackDamage = other.m_attackDamage;
		this->m_energyPoints = other.m_energyPoints;
		this->m_hitPoints = other.m_energyPoints;
		this->m_name = other.m_name;
	}
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "This is an amazingly positive message: Anyone up for a high-five? :)" << std::endl;
}
