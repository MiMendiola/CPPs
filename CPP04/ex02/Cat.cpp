#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << BLUE << "Cat Default Constructor Called!" << RESET << std::endl;
}

Cat::Cat(const Cat &other) : Animal(), brain( new Brain() )
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

void            Cat::getIdea(int index) const
{
    if (index < 0 || index >= 100)
    {
        std::cout << "Could not add idea. Index must be between 0 and 99." << std::endl;
		return ;
	}

    brain->getIdea(index);
}

void            Cat::setIdea(std::string idea, int index)
{
    if (index < 0 || index >= 100)
    {
        std::cout << "Could not add idea. Index must be between 0 and 99." << std::endl;
		return ;
	}
    if (!idea.empty())
    {
        std::cout <<" Added idea: [ " << idea << " ]" << std::endl;
        brain->setIdea(idea, index);
    }
    
}
