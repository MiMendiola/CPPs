#include "Serializer.hpp"

Serializer::Serializer()
{
    std::cout << BLUE << "Serializer Default Constructor Called!" << RESET << std::endl;
}

Serializer::Serializer(const Serializer &other)
{
    *this = other;
    std::cout << BLUE << "Serializer Copy Constructor Called!" << RESET << std::endl;
}

Serializer &Serializer::operator=(const Serializer &Serializer)
{
    (void)Serializer;
    std::cout << BLUE << "Serializer Copy Assignment Constructor Called!" << RESET << std::endl;

    return (*this);
}

Serializer::~Serializer()
{
    std::cout << BLUE << "Serializer Destructor Called!" << RESET << std::endl;
}

uintptr_t Serializer::serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}