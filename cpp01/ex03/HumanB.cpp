#include "HumanB.hpp"

void	HumanB::setWeapon(Weapon &W1)
{
	W = &W1;
}

void	HumanB::attack()
{
	if (W != nullptr)
		std::cout<<name<<" attacks with their "<<W->getType()<<"\n";
	else
		std::cout<<name<<" attacks with their "<<"None"<<"\n";
}