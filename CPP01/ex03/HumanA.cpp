#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
    return ;
}

HumanA::~HumanA()
{
    return ;
}

std::string HumanA::getName()
{
    return this->_name;
}

const Weapon& HumanA::getWeapon() const
{
    return this->_weapon;
}

void        HumanA::setName(std::string name)
{
    this->_name = name;
}


void        HumanA::attack()
{
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << "\n";
}
