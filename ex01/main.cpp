#include "ScavTrap.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "Create ScavTrap" << std::endl;
	ScavTrap scav("Guardian");
	std::cout << std::endl;
	std::cout << " Attack Test " << std::endl;
	scav.attack("Intruder");
	std::cout << std::endl;
	std::cout << " Guard Gate Test " << std::endl;
	scav.guardGate();
	std::cout << std::endl;
	std::cout << " Exhaust Energy Test " << std::endl;
	for (int i = 0; i < 51; ++i)
	{
		scav.attack("Intruder");
	}
	std::cout << std::endl;
	std::cout << " Program End " << std::endl;
	return (0);
}