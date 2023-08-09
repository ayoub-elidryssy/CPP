#include <iostream>

# ifndef Zombie_hpp
# define Zombie_hpp

class Zombie
{
private:
	std::string name;
public:
	Zombie(std::string name1)
	{
		name = name1;
	}

	void	announce(void);
	~Zombie()
	{
		std::cout<<"zombie : "<<name<<" is destroyed\n";
	}

};

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);

#endif
