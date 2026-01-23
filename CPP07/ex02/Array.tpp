#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template <typename T>
Array<T>::Array() : array(NULL), arraySize(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : array(new T[n]), arraySize(n) {}

template <typename T>
Array<T>::Array(const Array &other) {
    *this = other;
};

template <typename T>
Array<T>& Array<T>::operator=(const Array &Array) {
    if (this != &Array) {
        this->arraySize = Array.arraySize;
        this->array = new T[arraySize];

        for (size_t i = 0; i<arraySize; i++)
            this->array[i] = Array.array[i];
    }

    return (*this);
};

template <typename T>
Array<T>::~Array() {
    delete[] array;
};

template <typename T>
T& Array<T>::operator[](size_t i)
{
    if (i >= this->arraySize) 
        throw std::out_of_range("Index out of bounds");
    return this->array[i];
}

template <typename T>
size_t Array<T>::size() {
    return this->arraySize;
}

#endif