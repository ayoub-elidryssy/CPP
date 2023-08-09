#include <iostream>

# ifndef Zombie_hpp
# define Zombie_hpp

class Zombie
{
private:
	std::string name;
public:
	void	set_name(std::string name1)
	{
		name = name1;
	}
	void	announce(void);

	~Zombie()
	{
		std::cout<<"zombie : "<<name<<" is destroyed\n";
	}

};

Zombie* zombieHorde(int N, std::string name);

#endif
