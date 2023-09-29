#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <stdint.h> 
#include "data.hpp"

class Serializer
{
public:
    Serializer();
    Serializer(const Serializer& oth);
    Serializer& operator=(const Serializer& oth);
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
    ~Serializer();
};

#endif