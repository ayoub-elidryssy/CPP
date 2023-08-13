#include "Clsrpl.hpp"

void	Clsrpl::replace()
{
	size_t	pos;

	In_file.open(file_name, std::ios::in);
	Out_file.open("Out_file", std::ios::out);
	if (!In_file){
		std::cout<<file_name<<" : cant opening"<<"\n";
		return ;
	}
	while (std::getline(In_file,Line))
	{
		pos = Line.find(s1);
		while (pos != std::string::npos)
		{
			Line.erase(pos, s1.length());
			Line.insert(pos, s2);
			pos = Line.find(s1, pos+s2.length());
		}
		Out_file<<Line<<"\n";
	}
	In_file.close();
	Out_file.close();
}
