#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include "ClapTrap.hpp"
class FragTrap : public ClapTrap
{
  public:
	FragTrap(const std::string &name);
	~FragTrap();
	void highFivesGuys(void);
};
#endif