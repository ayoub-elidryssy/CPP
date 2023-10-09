#include "MutantStack.hpp"

int main(){
	std::vector<int> V(5);

	std::vector<int>::iterator iter;
	for (iter = V.begin(); iter != V.end(); ++iter)
		std::cout<< *iter <<std::endl;

	MutantStack<int> m;
	m.push(4);
	m.push(4);
	m.push(4);
	m.push(4);
	MutantStack<int>::iterator it;
}