#include "Brain.hpp"

Brain::Brain()
{
    std::cout << BLUE << "Brain Default Constructor Called!" << RESET << std::endl;
}

Brain::Brain(const Brain &other) 
{
    *this = other;
    std::cout << BLUE << "Brain Copy Constructor Called!" << RESET << std::endl;
}

Brain &Brain::operator=(const Brain &Brain)
{
    if (this != &Brain) {
        for (int i = 0; i < 100; i++) {
			this->ideas[i] = Brain.ideas[i];
		}
    }
    std::cout << BLUE << "Brain Copy Assignment Constructor Called!" << RESET << std::endl;

    return (*this);
}

Brain::~Brain()
{
    std::cout << BLUE << "Brain Destructor Called!" << RESET << std::endl;
}

void            Brain::getIdea(int index) const
{
    if (index < 0 || index >= 100)
    {
        std::cout << "Could not add idea. Index must be between 0 and 99." << std::endl;
		return ;
	}

    std::cout << index + 1 << ". Idea: [ " << this->ideas[index] << " ]" << std::endl;
}

void            Brain::setIdea(std::string idea, int index)
{
    if (index < 0 || index >= 100)
    {
        std::cout << "Could not add idea. Index must be between 0 and 99." << std::endl;
		return ;
	}
    if (!idea.empty())
    {
        std::cout <<" Added idea: [ " << idea << " ]" << std::endl;
        this->ideas[index] = idea;
    }
    
}

void    Brain::printIdeas()
{
    for (int i = 0; i < 100; i++) {
        std::cout << i + 1 << ". Idea: [ " << this->ideas[i] << " ]" << std::endl;
    }
}
