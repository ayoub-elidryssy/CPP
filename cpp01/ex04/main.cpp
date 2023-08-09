#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	(void)ac;
	(void)av;
	std::fstream Myfile;

	Myfile.open("Myfile",  std::ios::out);
	if (Myfile)
	{
		Myfile << "hie I'm going to do a simple test ||| ";
		Myfile << "in this file named Myfile\n";
	}
	Myfile.close();
	system("cat Myfile");
}