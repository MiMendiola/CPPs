#ifndef __HUMANB_H__
#define __HUMANB_H__

// ************************************************************************** //
//                                HumanB Class                                //
// ************************************************************************** //
#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {
    public:
        HumanB(std::string name);
        ~HumanB( void );
        
        std::string getName();
        Weapon*      getWeapon() const;

        void        setName(std::string name);
        void        setWeapon(Weapon& weapon);
        
        void        attack() const;

    private:
        std::string	_name;
        Weapon*	    _weapon;
};

#endif
