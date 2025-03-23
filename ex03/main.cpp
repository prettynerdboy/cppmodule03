#include "DiamondTrap.hpp"
#include <iostream>

int	main(void)
{
	std::cout << " Test : Creating a DiamondTrap instance " << std::endl;
	DiamondTrap diamond("Diamondy");
    std::cout << diamond.getName () << " initial hitPoints : " << diamond.getHitpoint() <<std::endl;

	std::cout << "\n Test : Checking DiamondTrap's attack " << std::endl;
	diamond.attack("Target Dummy");

	std::cout << "\n Test : Taking damage and repairing " << std::endl;
	diamond.takeDamage(20);
    std::cout << diamond.getName () << " remainning hitPoints : " << diamond.getHitpoint() <<std::endl;
	diamond.beRepaired(10);
    std::cout << diamond.getName () << " remainning hitPoints : " << diamond.getHitpoint() <<std::endl;

	std::cout << "\n Test : Calling DiamondTrap's whoAmI() " << std::endl;
	diamond.whoAmI();

	std::cout << "\n Test : Destroying DiamondTrap instance " << std::endl;
	return (0);
}