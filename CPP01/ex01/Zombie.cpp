#include "Zombie.hpp"

Zombie::Zombie()
{
    return ;
};

Zombie::Zombie( const std::string &name )
{
    this->_name = name;
};

Zombie::~Zombie()
{
    std::cout << _name << " dies\n";
};

void Zombie::announce( void )
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setZombieName(std::string _name)
{
    this->_name = _name;
}
