#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name
	+ "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << name << " is created!" << std::endl;
}
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " is destroyed!" << std::endl;
}
void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am " << _name << ",\
 and my ClapTrap name is "
				<< ClapTrap::_name << "!" << std::endl;
}