#ifndef __FRAGTRAP_H__
#define __FRAGTRAP_H__

// ************************************************************************** //
//                                FragTrap Class                              //
// ************************************************************************** //
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &other);
        FragTrap &operator=(const FragTrap &FragTrap);
        ~FragTrap();
        
        void            highFivesGuys(void);
};

#endif
