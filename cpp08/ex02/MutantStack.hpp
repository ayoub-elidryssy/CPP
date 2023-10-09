#ifndef MUTANTSTACK
#define MUTANTSTACK

#include <iostream>
#include <vector>
#include <limits>
#include <vector>
#include <list>
#include <stack>
#include <algorithm>
#include <exception>

template<class T>
class MutantStack: public std::stack<T>
{	
public:
	typedef typename std::stack<T>::container_type::iterator iterator;

	MutantStack(){
		return;
	}
	MutantStack(const MutantStack& oth): std::stack<T>(oth){
		*this = oth;
	}
	MutantStack& operator=(const MutantStack& oth){
		*this->operator=(oth); 
		return *this;
	}
	~MutantStack(){
		;
	}
};

#endif