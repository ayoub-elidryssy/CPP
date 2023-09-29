#include "functions.hpp"

int main(){
    Base *ptr0 = generate();
    identify(ptr0);
    identify(*ptr0);
    delete ptr0;
}