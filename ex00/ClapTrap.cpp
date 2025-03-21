#include "ClapTrap.hpp"

//private
bool ClapTrap::_canAction()
{
    if(this->_hitPoints <=0)
    {
        std::cout << "ClapTrap " << this->getName() << " is out of hit points!"  << std::endl;
        return (false);
    }
    if(this->_energyPoints <=0)
    {
        std::cout <<  "ClapTrap " << this->getName() << " has no energy left to attack!" << std::endl;
		return (false);
    }
    return (true);
}

//public
    //constructor
ClapTrap::ClapTrap(std::string name) : _name(name),_hitPoints(10),
    _energyPoints(10),_attackDamage(0)
{
    std::cout << "ClapTrap " << name << " is created!" << std::endl;
}

    //destrucotr
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->getName() << " is destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if(!this->_canAction())
        return ;
    this->_energyPoints--;
    std::cout << "ClapTrap " << this->getName() << " attacks " << target << ",\
 causing " << _attackDamage
				<< " points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->_canAction())
		return ;
	if (this->_hitPoints < amount)
		amount = this->_hitPoints;
	this->_hitPoints -= amount;
	std::cout << "ClapTrap " << this->getName() << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->_canAction())
		return ;
	this->_energyPoints--;
	this->_hitPoints += amount;
	std::cout << "ClapTrap " << this->getName() << " is repaired by " << amount << " points!" << std::endl;
}

std::string ClapTrap::getName()const
{
	return (this->_name);
}

unsigned int ClapTrap::getHitpoint()const
{
    return (this->_hitPoints);
}