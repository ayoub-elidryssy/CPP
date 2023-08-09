#include "Zombie.hpp"

int	main()
{
	Zombie zombie("zombi1");
	Zombie *ptr_zombie;
	zombie.announce();
	ptr_zombie = newZombie("ga3fer");
	ptr_zombie->announce();
	std::cout<<"||||||\n||||||\n";
	delete ptr_zombie;

}
