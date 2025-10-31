#include "Zombie.hpp"

Zombie::Zombie( const std::string &name)
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
