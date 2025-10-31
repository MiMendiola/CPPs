#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

// ************************************************************************** //
//                                Zombie Class                                //
// ************************************************************************** //
#include <iostream>
#include <string>
#include <cctype>
#include <ctime>

class Zombie {
    public:
        Zombie( const std::string &name );
        ~Zombie( void );
        
        void announce( void );

    private:
        std::string	_name;
};

Zombie* newZombie( const std::string &name );
void    randomChump( const std::string &name );

#endif
