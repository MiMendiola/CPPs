#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << BLUE << "Dog Default Constructor Called!" << RESET << std::endl;
}

Dog::Dog(const Dog &other) : Animal(), brain( new Brain() )
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

void            Dog::getIdea(int index) const
{
    if (index < 0 || index >= 100)
    {
        std::cout << "Could not add idea. Index must be between 0 and 99." << std::endl;
		return ;
	}

    brain->getIdea(index);
}

void            Dog::setIdea(std::string idea, int index)
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
