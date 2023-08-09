#include "Zombie.hpp"


Zombie* zombieHorde(int N, std::string name)
{
	Zombie *ptr_zombie;

	ptr_zombie = new Zombie[N];
	while(N--)
		ptr_zombie[N].set_name(name);

	return (ptr_zombie);
}
