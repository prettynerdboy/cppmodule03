#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
        std::string _name;
        unsigned int _hitPoints;
        unsigned int _energyPoints;
        unsigned int _attackDamage;

        bool _canAction();
    public:
        ClapTrap(std::string name);
        virtual ~ClapTrap();

        //action
        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        //geter
        std::string getName()const;
        unsigned int getHitpoint()const;
};

#endif