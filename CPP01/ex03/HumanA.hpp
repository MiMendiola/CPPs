#ifndef __HUMANA_H__
#define __HUMANA_H__

// ************************************************************************** //
//                                HumanA Class                                //
// ************************************************************************** //
#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA {
    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA( void );
        
        std::string getName();
        const Weapon&      getWeapon() const;

        void        setName(std::string name);
        
        void        attack();

    private:
        std::string	_name;
        Weapon&      _weapon;
};

#endif
