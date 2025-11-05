#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Diamond_clap_name")
{
    this->_name = "BEAUTY";
    this->_energy = 50;
    ClapTrap::_name = this->_name + "_clap_name";
    std::cout << BLUE << "DiamondTrap Default Constructor Called!" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), _name(name)
{
    this->_name = name;
    this->_energy = 50;

    std::cout << BLUE << "DiamondTrap Name Default Constructor Called!" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(), ScavTrap(), FragTrap()
{
    *this = other;
    std::cout << BLUE << "DiamondTrap Copy Constructor Called!" << RESET << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &DiamondTrap)
{
    if (this != &DiamondTrap) {
        this->ClapTrap::_name = DiamondTrap.ClapTrap::_name;
        this->_hit = DiamondTrap._hit;
        this->_energy = DiamondTrap._energy;
        this->_attack = DiamondTrap._attack;
    }
    std::cout << BLUE << "DiamondTrap Copy Assignment Constructor Called!" << RESET << std::endl;

    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << BLUE << "DiamondTrap Destructor Called!" << RESET << std::endl;
}

void    DiamondTrap::whoAmI()
{
    if (this->_hit <= 0)
        std::cout << YELLOW << "DiamondTrap " << this->_name << " is dead 💀" << RESET << std::endl;
    else
        std::cout << YELLOW << "DiamondTrap " << this->_name << " AND ClapTrap calls " << ClapTrap::_name << RESET << std::endl;
}
