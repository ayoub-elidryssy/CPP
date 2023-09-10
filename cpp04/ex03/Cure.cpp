#include "Cure.hpp"

Cure::Cure(){
    std::cout<<"Cure: defult Consructor Called\n";
    type = "cure";
}

Cure::Cure(const std::string& n_type){
    type = n_type;
}

Cure::Cure(const Cure& oth){
    *this = oth;
}

AMateria* Cure::clone() const{
    return (new Cure(*this));
}

Cure& Cure::operator=(const Cure& oth){
    if (this != &oth){
        type = oth.getType();
    }
}

void use(ICharacter& target){
    std::cout<<"* heals <name> s wounds *\n";
}

Cure::~Cure(){
    std::cout<<"Cure: Destructor Called\n";
}
