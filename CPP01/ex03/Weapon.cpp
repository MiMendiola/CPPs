#include "Weapon.hpp"

Weapon::Weapon()
{
    return ;
}

Weapon::Weapon(std::string type)
{
    this->_type = type;
}

Weapon::~Weapon()
{
    return ;
}

std::string     Weapon::getType()
{
    return this->_type;
}

void            Weapon::setType(std::string type)
{
    this->_type = type;
}
