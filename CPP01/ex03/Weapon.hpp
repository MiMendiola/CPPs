#ifndef __WEAPON_H__
#define __WEAPON_H__

// ************************************************************************** //
//                                Weapon Class                                //
// ************************************************************************** //
#include <string>

class Weapon {
    public:
        Weapon();
        Weapon(std::string type);
        ~Weapon( void );
        
        std::string getType();
        
        void        setType(const char *type);

    private:
        std::string	_type;
};

#endif
