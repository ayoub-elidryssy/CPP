#include "Clsrpl.hpp"

int main(int ac, char **av)
{
	if (ac < 4)
	{
		std::cout<<"parameters not complet"<<"\n";
		return (0);
	}
	Clsrpl	rpl(av[1], av[2], av[3]);
	rpl.replace();
}