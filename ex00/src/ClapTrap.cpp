#include "ClapTrap.hpp"

#include <iostream>
#include <string>

ClapTrap::ClapTrap(std::string name) :
	m_name(name)
{
	std::cout << "ClapTrap named " << m_name << " got constructed! :)" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& other) :
	m_name(other.m_name), 
	m_hitPoints(other.m_hitPoints), 
	m_energyPoints(other.m_energyPoints), 
	m_attackDamage(other.m_attackDamage)
{
	std::cout << "ClapTrap named " << m_name << " constructed with the copy-constructor! :)" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap named " << m_name << " got deconstructed :c" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "A ClapTrap's copy-assignment operator is being called" << std::endl;

	m_name = other.m_name;
	m_attackDamage = other.m_attackDamage;
	m_energyPoints = other.m_energyPoints;
	m_hitPoints = other.m_hitPoints;

	return *this;
}

bool ClapTrap::ableTo()
{
	return m_energyPoints > 0 && m_hitPoints > 0;
}

void ClapTrap::attack(const std::string& target)
{
	if (!this->ableTo())
		return;

	std::cout << "ClapTrap " << m_name << " attacks " << target << ", causing " << m_attackDamage << " points of damage!" << std::endl;
	m_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << m_name << " takes " << amount << " points of damage!" << std::endl;
	m_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->ableTo())
		return;

	std::cout << "ClapTrap " << m_name << " repairs " << amount << " hitpoints!" << std::endl;
	m_energyPoints--;
	m_hitPoints += amount;
}
