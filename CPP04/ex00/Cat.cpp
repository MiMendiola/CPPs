#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << BLUE << "Cat Default Constructor Called!" << RESET << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    *this = other;
    std::cout << BLUE << "Cat Copy Constructor Called!" << RESET << std::endl;
}

Cat &Cat::operator=(const Cat &Cat)
{
    if (this != &Cat) {
        this->type = Cat.type;
    }
    std::cout << BLUE << "Cat Copy Assignment Constructor Called!" << RESET << std::endl;

    return (*this);
}

Cat::~Cat()
{
    std::cout << BLUE << "Cat Destructor Called!" << RESET << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << YELLOW << "Cat MIAUS" << RESET << std::endl;
}
