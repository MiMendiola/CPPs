#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->_name = name;
}

HumanB::~HumanB()
{
    return ;
}

std::string HumanB::getName()
{
    return this->_name;
}

Weapon* HumanB::getWeapon() const
{
    return this->_weapon;
}

void        HumanB::setName(std::string name)
{
    this->_name = name;
}

void        HumanB::setWeapon(Weapon& weapon)
{
    this->_weapon = &weapon;
}

void        HumanB::attack() const
{
    if (this->_weapon)
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << "\n";
    else
        std::cout << this->_name << " has no weapon" << "\n";
}
