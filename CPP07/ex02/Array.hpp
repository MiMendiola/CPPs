#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cstring>

template <typename T>
class Array {
    private:
        T       *array;
        size_t  arraySize;

    public:
        Array();
        Array(unsigned int n);
        Array(const Array &other);
        Array &operator=(const Array &Array);
        ~Array();

        T &operator[](size_t i);
        size_t size();

};

#include "Array.tpp"

#endif