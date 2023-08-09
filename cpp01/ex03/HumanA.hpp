#include "Weapon.hpp"

# ifndef HumanA_hpp
# define HumanA_hpp

class HumanA
{
private:
	std::string	name;
	Weapon		&W;
public:
	HumanA(std::string H_name, Weapon &W1): W(W1)
	{
		name = H_name;
	}
	void	attack();
};

#endif