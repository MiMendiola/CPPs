#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("BEAUTY"), _hit(10), _energy(10), _attack(0)
{
    std::cout << "Default Constructor Called!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit(10), _energy(10), _attack(0)
{
    std::cout << "Name Default Constructor Called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ClapTrap) : _name(ClapTrap._name), _hit(ClapTrap._hit), _energy(ClapTrap._energy), _attack(ClapTrap._attack)
{
    std::cout << "Copy Constructor Called!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ClapTrap)
{
    if (this != &ClapTrap) {
        this->_name = ClapTrap.getName();
        this->_hit = ClapTrap.getHit();
        this->_energy = ClapTrap.getEnergy();
        this->_attack = ClapTrap.getAttack();
    }
    std::cout << "Copy Assignment Constructor Called!" << std::endl;

    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor Called!" << std::endl;
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
        std::cout << "ClapTrap " << this->_name << " have no damage" << std::endl;
        return ;
    }
    if (this->_hit <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " have no hit points left" << std::endl;
        return ;
    }
    if (this->_energy == 0)
    {
        std::cout << "ClapTrap " << this->_name << " have no energy to do nothing" << std::endl;
        return ;
    }
    
    this->_energy--;
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hit <= 0)
        std::cout << "ClapTrap " << this->_name << " is dead 💀" << std::endl;
    else
    {
        if (amount <= 0)
        {
            std::cout << "ClapTrap " << this->_name << " receive no damage" << std::endl;
            return ;
        }
        else if (this->_hit < amount)
            this->_hit = 0;
        else
            this->_hit -= amount;

        this->_energy--;
        std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;

        if (this->_hit <= 0)
        {
            std::cout << "ClapTrap " << this->_name << " is dead 💀" << std::endl;
            return ;
        }
        else
        {
            std::cout << "ClapTrap " << this->_name << " has " << this->_hit << " hit points!" << std::endl;
            return ;
        }
    }
}

void	ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hit <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " is dead 💀" << std::endl;
        return ;
    }
    else
    {
        if (amount <= 0)
        {
            std::cout << "ClapTrap " << this->_name << " can’t no repair nothing" << std::endl;
            return ;
        }
        else
            this->_hit += amount;
    }
    this->_energy--;
    std::cout << "ClapTrap " << this->_name << " repairs itself " << amount << " hit points!" << std::endl;
    std::cout << "ClapTrap " << this->_name << " has " << this->_hit << " hit points!" << std::endl;
}
