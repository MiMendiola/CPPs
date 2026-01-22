#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <cstring>

template <typename T, typename F>
void iter(T *addrArray, int lenght, F function)
{
    for (int i = 0; i < lenght; i++)
    {
        function(addrArray[i]);
    }
}

template <typename T>
void print(T value)
{
    std::cout << "Value: " << value << std::endl;
}

#endif