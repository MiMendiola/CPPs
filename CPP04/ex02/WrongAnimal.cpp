#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << BLUE << "WrongAnimal Default Constructor Called!" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) 
{
    *this = other;
    std::cout << BLUE << "WrongAnimal Copy Constructor Called!" << RESET << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &WrongAnimal)
{
    if (this != &WrongAnimal) {
        this->type = WrongAnimal.type;
    }
    std::cout << BLUE << "WrongAnimal Copy Assignment Constructor Called!" << RESET << std::endl;

    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << BLUE << "WrongAnimal Destructor Called!" << RESET << std::endl;
}

std::string    WrongAnimal::getType() const
{
    return this->type;
}

void    WrongAnimal::makeSound() const
{
    std::cout << YELLOW << "WrongAnimal dont know to make a sound" << RESET << std::endl;
}
