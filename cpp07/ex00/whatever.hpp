#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<class T1, class T2>
void swap(T1& a, T2& b){
    T1 tmp = a;
    a = b;
    b = tmp;
}


template<class T1, class T2>
T2 min(T1 a, T2 b){
    return (a < b ? a : b);
}

template<class T1, class T2>
T2 max(T1 a, T2 b){
    return (a > b ? a : b);
}

#endif