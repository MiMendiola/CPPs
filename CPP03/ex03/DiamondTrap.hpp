#ifndef __DIAMONDTRAP_H__
#define __DIAMONDTRAP_H__

// ************************************************************************** //
//                                DiamondTrap Class                              //
// ************************************************************************** //
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap &other);
        DiamondTrap &operator=(const DiamondTrap &DiamondTrap);
        ~DiamondTrap();
        
        using           ScavTrap::attack;
        void            whoAmI();

    private:
        std::string     _name;
};

#endif
