#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("BEAUTY"), _hit(10), _energy(10), _attack(0)
{
    std::cout << BLUE << "ClapTrap Default Constructor Called!" << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit(10), _energy(10), _attack(0)
{
    std::cout << BLUE << "ClapTrap Name Default Constructor Called!" << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ClapTrap) : _name(ClapTrap._name), _hit(ClapTrap._hit), _energy(ClapTrap._energy), _attack(ClapTrap._attack)
{
    std::cout << BLUE << "ClapTrap Copy Constructor Called!" << RESET << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ClapTrap)
{
    if (this != &ClapTrap) {
        this->_name = ClapTrap.getName();
        this->_hit = ClapTrap.getHit();
        this->_energy = ClapTrap.getEnergy();
        this->_attack = ClapTrap.getAttack();
    }
    std::cout << BLUE << "ClapTrap Copy Assignment Constructor Called!" << RESET << std::endl;

    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << BLUE << "ClapTrap Destructor Called!" << RESET << std::endl;
}

std::string     ClapTrap::getName( void ) const
{
    return this->_name;
}

unsigned int     ClapTrap::getHit( void ) const
{
    return this->_hit;
}

unsigned int     ClapTrap::getEnergy( void ) const
{
    return this->_energy;
}

unsigned int     ClapTrap::getAttack( void ) const
{
    return this->_attack;
}

// SETTERS
void    ClapTrap::setName( std::string name )
{
    this->_name = name;
}

void    ClapTrap::setHit( unsigned int const hit )
{
    this->_hit = hit;
}

void    ClapTrap::setEnergy( unsigned int const energy )
{
    this->_energy = energy;
}

void    ClapTrap::setAttack( unsigned int const attack )
{
    this->_attack = attack;
}

void    ClapTrap::attack(const std::string& target)
{
    if (target.empty())
    {
        std::cout << RED << "ClapTrap " << this->_name << " have no damage" << RESET << std::endl;
        return ;
    }
    if (this->_hit <= 0)
    {
        std::cout << RED<< "ClapTrap " << this->_name << " have no hit points left" << RESET << std::endl;
        return ;
    }
    if (this->_energy == 0)
    {
        std::cout << RED << "ClapTrap " << this->_name << " have no energy to do nothing" << RESET << std::endl;
        return ;
    }
    
    this->_energy--;
    std::cout << RED << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack << " points of damage!" << RESET << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hit <= 0)
        std::cout << MAGENTA << "ClapTrap " << this->_name << " is dead 💀" << RESET << std::endl;
    else
    {
        if (amount <= 0)
        {
            std::cout << MAGENTA << "ClapTrap " << this->_name << " receive no damage" << RESET << std::endl;
            return ;
        }
        else if (this->_hit < amount)
            this->_hit = 0;
        else
            this->_hit -= amount;

        this->_energy--;
        std::cout << MAGENTA << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << RESET << std::endl;

        if (this->_hit <= 0)
        {
            std::cout << MAGENTA << "ClapTrap " << this->_name << " is dead 💀" << RESET << std::endl;
            return ;
        }
        else
        {
            std::cout << MAGENTA << "ClapTrap " << this->_name << " has " << this->_hit << " hit points!" << RESET << std::endl;
            return ;
        }
    }
}

void	ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hit <= 0)
    {
        std::cout << GREEN << "ClapTrap " << this->_name << " is dead 💀" << RESET << std::endl;
        return ;
    }
    else
    {
        if (amount <= 0)
        {
            std::cout << GREEN << "ClapTrap " << this->_name << " can’t no repair nothing" << RESET << std::endl;
            return ;
        }
        else
            this->_hit += amount;
    }
    this->_energy--;
    std::cout << GREEN << "ClapTrap " << this->_name << " repairs itself " << amount << " hit points!" << RESET << std::endl;
    std::cout << GREEN << "ClapTrap " << this->_name << " has " << this->_hit << " hit points!" << RESET << std::endl;
}
