#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

#include <iostream>
#include <string>

ScavTrap::ScavTrap(std::string name):
	ClapTrap(name)
{
	std::cout << "Default constructor called for the ScavTrap class" << std::endl;
	m_hitPoints = 10;
	m_energyPoints = 50;
	m_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other):
	ClapTrap(other)
{
	std::cout << "Copy constructor called for the ScavTrap class" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor called for the ScavTrap class" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "Copy-assignment operator called for the ScavTrap class" << std::endl;

	if (this != &other)
	{
		this->m_attackDamage = other.m_attackDamage;
		this->m_hitPoints = other.m_hitPoints;
		this->m_energyPoints = other.m_energyPoints;
		this->m_name = other.m_name;
	}

	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if (!this->ableTo())
		return;

	std::cout << "ScavTrap " << m_name << " attacks " << target << ", causing " << m_attackDamage << " points of damage!" << std::endl;
	m_energyPoints--;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in the 'gate keeper' mode!" << std::endl;
}
