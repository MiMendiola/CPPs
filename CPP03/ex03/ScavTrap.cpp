#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->_hit = 100;
    this->_energy = 50;
    this->_attack = 20;
    std::cout << BLUE << "ScavTrap Default Constructor Called!" << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_hit = 100;
    this->_energy = 50;
    this->_attack = 20;
    std::cout << BLUE << "ScavTrap Name Default Constructor Called!" << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    *this = other;
    std::cout << BLUE << "ScavTrap Copy Constructor Called!" << RESET << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &ScavTrap)
{
    if (this != &ScavTrap) {
        this->_name = ScavTrap.getName();
        this->_hit = ScavTrap.getHit();
        this->_energy = ScavTrap.getEnergy();
        this->_attack = ScavTrap.getAttack();
    }
    std::cout << BLUE << "ScavTrap Copy Assignment Constructor Called!" << RESET << std::endl;

    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << BLUE << "ScavTrap Destructor Called!" << RESET << std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
    if (target.empty())
    {
        std::cout << RED << "ScavTrap " << this->_name << " attacks nobody" << RESET << std::endl;
        return ;
    }
    if (this->_hit <= 0)
    {
        std::cout << RED << "ScavTrap " << this->_name << " have no hit points left" << RESET << std::endl;
        return ;
    }
    if (this->_energy == 0)
    {
        std::cout << RED << "ScavTrap " << this->_name << " have no energy to do nothing" << RESET << std::endl;
        return ;
    }
    
    this->_energy--;
    std::cout << RED << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack << " points of damage!" << RESET << std::endl;
}

void    ScavTrap::guardGate()
{
    if (this->_hit <= 0)
        std::cout << YELLOW << "ScavTrap " << this->_name << " is dead 💀" << RESET << std::endl;
    else
        std::cout << YELLOW << "ScavTrap " << this->_name << " is now in Gate keeper mode." << RESET << std::endl;
}
