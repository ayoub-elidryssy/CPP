#include "AMateria.hpp"

AMateria::AMateria(){
    type = "unamed";
}

AMateria::AMateria(std::string const & type1){
    type = type1;
}

std::string const & AMateria::getType() const{
    return type;
}

void AMateria::use(ICharacter& target){
    std::cout<<"you should not call this method\n";
}