#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << BLUE << "Dog Default Constructor Called!" << RESET << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    *this = other;
    std::cout << BLUE << "Dog Copy Constructor Called!" << RESET << std::endl;
}

Dog &Dog::operator=(const Dog &Dog)
{
    if (this != &Dog) {
        this->type = Dog.type;
    }
    std::cout << BLUE << "Dog Copy Assignment Constructor Called!" << RESET << std::endl;

    return (*this);
}

Dog::~Dog()
{
    std::cout << BLUE << "Dog Destructor Called!" << RESET << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << YELLOW << "Dog BARKS" << RESET << std::endl;
}
