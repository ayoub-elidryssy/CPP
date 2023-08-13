#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout<<"$$-> name of level is debug\n";
}

void	Harl::info(void)
{
	std::cout<<"$$-> name of level is info\n";
}

void	Harl::warning(void)
{
	std::cout<<"$$-> name of level is warning\n";
}

void	Harl::error(void)
{
	std::cout<<"$$-> name of level is error\n";
}

void	Harl::complain(std::string level)
{
	int	index;
	if (level != "debug" && level != "info" && level != "warning" && level != "error"){
		std::cout<<"<< "<<level<<" >> : invalid level\n";
		return ;
	}
	index = (level == "debug") * 0 + (level == "info") + (level == "warning") * 2
		+ (level == "error") * 3;
	switch (index)
	{
		case 0:
			std::cout<<"the message send is debug\n";
		case 1:
			std::cout<<"the message send is info\n";
		case 2:
			std::cout<<"the message send is warning\n";
		case 3:
			std::cout<<"the message send is error\n";
		default:
			break;
	}
}
