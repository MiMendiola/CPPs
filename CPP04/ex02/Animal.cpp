#include "Animal.hpp"

Animal::Animal()
{
    std::cout << BLUE << "Animal Default Constructor Called!" << RESET << std::endl;
}

Animal::Animal(const Animal &other) 
{
    *this = other;
    std::cout << BLUE << "Animal Copy Constructor Called!" << RESET << std::endl;
}

Animal &Animal::operator=(const Animal &Animal)
{
    if (this != &Animal) {
        this->type = Animal.type;
    }
    std::cout << BLUE << "Animal Copy Assignment Constructor Called!" << RESET << std::endl;

    return (*this);
}

Animal::~Animal()
{
    std::cout << BLUE << "Animal Destructor Called!" << RESET << std::endl;
}

std::string    Animal::getType() const
{
    return this->type;
}
