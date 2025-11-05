#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << BLUE << "WrongCat Default Constructor Called!" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
    *this = other;
    std::cout << BLUE << "WrongCat Copy Constructor Called!" << RESET << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &WrongCat)
{
    if (this != &WrongCat) {
        this->type = WrongCat.type;
    }
    std::cout << BLUE << "WrongCat Copy Assignment Constructor Called!" << RESET << std::endl;

    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << BLUE << "WrongCat Destructor Called!" << RESET << std::endl;
}

void    WrongCat::makeSound() const
{
    std::cout << YELLOW << "WrongCat MIAUS" << RESET << std::endl;
}
