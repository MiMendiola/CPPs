#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    this->_hit = 100;
    this->_energy = 100;
    this->_attack = 30;
    std::cout << BLUE << "FragTrap Default Constructor Called!" << RESET << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_hit = 100;
    this->_energy = 100;
    this->_attack = 30;
    std::cout << BLUE << "FragTrap Name Default Constructor Called!" << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    *this = other;
    std::cout << BLUE << "FragTrap Copy Constructor Called!" << RESET << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &FragTrap)
{
    if (this != &FragTrap) {
        this->_name = FragTrap.getName();
        this->_hit = FragTrap.getHit();
        this->_energy = FragTrap.getEnergy();
        this->_attack = FragTrap.getAttack();
    }
    std::cout << BLUE << "FragTrap Copy Assignment Constructor Called!" << RESET << std::endl;

    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << BLUE << "FragTrap Destructor Called!" << RESET << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    if (this->_hit <= 0)
        std::cout << YELLOW << "FragTrap " << this->_name << " is dead 💀" << RESET << std::endl;
    else
        std::cout << YELLOW << "FragTrap " << this->_name << " request a high-fives ✋." << RESET << std::endl;
}
