#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int	main(void)
{
	std::cout << " Test 1: Creating a FragTrap instance " << std::endl;
	FragTrap frag("Fraggy");
    std::cout << frag.getName () << " initial hitPoints : " << frag.getHitpoint() <<std::endl;

	std::cout << "\n Test 2: Checking FragTrap's attack, takeDamage,\
 and beRepaired "
				<< std::endl;
	frag.attack("Target Dummy");
	frag.takeDamage(20);
    std::cout << frag.getName () << " remainning hitPoints : " << frag.getHitpoint() <<std::endl;
	frag.beRepaired(15);
    std::cout << frag.getName () << " remainning hitPoints : " << frag.getHitpoint() <<std::endl;
	std::cout << "\n Test 3: FragTrap requests high fives " << std::endl;
	frag.highFivesGuys();

	std::cout << "\n Test 4: Destroying FragTrap instance " << std::endl;

	return (0);
}