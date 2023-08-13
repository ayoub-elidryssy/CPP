#include <iostream>
#include <fstream>

# ifndef Clsrpl_hpp
# define Clsrpl_hpp

class Clsrpl
{
private:
	std::string		s1;
	std::string		s2;
	std::fstream	In_file;
	std::fstream	Out_file;
	std::string		file_name;
	std::string		Line;
public:
	Clsrpl(std::string _file_name, std::string _s1, std::string _s2)
	{
		file_name = _file_name;
		s1 = _s1;
		s2 = _s2;
	}
	void	replace();
};

#endif