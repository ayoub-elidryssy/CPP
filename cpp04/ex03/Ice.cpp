#include "Ice.hpp"

Ice::Ice(){
    std::cout<<"Ice: defult Consructor Called\n";
    type = "ice";
}

Ice::Ice(const std::string& n_type){
    type = n_type;
}

Ice::Ice(const Ice& oth){
    *this = oth;
}

AMateria* Ice::clone() const{
    return (new Ice(*this));
}

Ice& Ice::operator=(const Ice& oth){
    if (this != &oth){
        type = oth.getType();
    }
}

void use(ICharacter& target){
    std::cout<<"* shoots an ice bolt at "<<"target *\n";
}

Ice::~Ice(){
    std::cout<<"Ice: Destructor Called\n";
}
