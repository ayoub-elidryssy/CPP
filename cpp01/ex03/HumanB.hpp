#include "Weapon.hpp"

# ifndef HumanB_hpp
# define HumanB_hpp

class HumanB
{
private:
	std::string	name;
	Weapon		*W;
public:
	HumanB(std::string H_name)
	{
		name = H_name;
	}
	void	attack();
	void	setWeapon(Weapon &W1);
};


#endif
