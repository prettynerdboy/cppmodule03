#include "ClapTrap.hpp"
#include <iostream>

int	main(void)
{
    std::cout << "object generating ..." << std::endl;
	ClapTrap  marionnette("marionnette");
    std::cout << "initial " << marionnette.getName() <<"'s hitpoints : " << marionnette.getHitpoint()<<std::endl;
	ClapTrap  arlequin("arlequin");
    std::cout << "initial " << arlequin.getName() <<"'s hitpoints : " << arlequin.getHitpoint()<<std::endl;

	std::cout << std::endl<< "attack Test (don't have attasks damage)" << std::endl;
	marionnette.attack("arlequin");
    std::cout << std::endl << "take damege Test" << std::endl;
	arlequin.takeDamage(5);
    std::cout << arlequin.getName () << " remainning hitPoints : " << arlequin.getHitpoint() <<std::endl;
	std::cout << std::endl << "repair Test" << std::endl;
	arlequin.beRepaired(3);
    std::cout << arlequin.getName () << " remainning hitPoints : " << arlequin.getHitpoint() <<std::endl;
	std::cout << std::endl<< "Exhaust Energy Test" << std::endl;
	for (int i = 0; i < 10; ++i)
	{
		marionnette.attack("arlequin");
	}
    std::cout << std::endl << "noHitPoint test" << std::endl;
	arlequin.takeDamage(10);
    std::cout << arlequin.getName () << " remainning hitPoint : " << arlequin.getHitpoint() <<std::endl;
	arlequin.attack("marionnette");
	arlequin.beRepaired(5);    	
    std::cout << std::endl;

	return (0);
}