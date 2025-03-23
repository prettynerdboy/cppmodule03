# include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " is destroyed!" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (!this->_canAction())
		return ;
	this->_energyPoints--;
	std::cout << "ScavTrap " << _name << " attacks " << target << ",\
 causing " << _attackDamage
				<< " points of damage !" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is entered gatekeeper mode" << std::endl;
}