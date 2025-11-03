#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

// ************************************************************************** //
//                                Zombie Class                                //
// ************************************************************************** //
#include <iostream>
#include <sstream>
#include <string>
#include <cctype>
#include <ctime>

class Zombie {
    public:
        Zombie();
        Zombie( const std::string &name );
        ~Zombie( void );
        
        void    announce( void );
        void    setZombieName(std::string _name);

    private:
        std::string	_name;
};

Zombie* zombieHorde( int N, std::string name );

#endif
