#include "Zombie.hpp"

void    randomChump( const std::string &name )
{
    Zombie a(name);
    a.announce();
}
