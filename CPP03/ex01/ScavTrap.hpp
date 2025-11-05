#ifndef __SCAVTRAP_H__
#define __SCAVTRAP_H__

// ************************************************************************** //
//                                ScavTrap Class                              //
// ************************************************************************** //
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &other);
        ScavTrap &operator=(const ScavTrap &ScavTrap);
        ~ScavTrap();
        
        void			attack(const std::string& target);
        void            guardGate();
};

#endif
