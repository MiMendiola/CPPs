#ifndef __CLAPTRAP_H__
#define __CLAPTRAP_H__

//   COLORS
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define RESET   "\033[0m"

// ************************************************************************** //
//                                ClapTrap Class                              //
// ************************************************************************** //
#include <iostream>
#include <string>
#include <cmath>

class ClapTrap {
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &ClapTrap);
        ClapTrap &operator=(const ClapTrap &ClapTrap);
        ~ClapTrap();
        
        // GETTERS
        std::string     getName( void ) const;
        unsigned int    getHit( void ) const;
        unsigned int    getEnergy( void ) const;
        unsigned int    getAttack( void ) const;
        // SETTERS
        void            setName( std::string name );
        void            setHit( unsigned int const hit );
        void            setEnergy( unsigned int const energy );
        void            setAttack( unsigned int const attack );

        // MEMBER FUNCTIONS
        void			attack(const std::string& target);
        void			takeDamage(unsigned int amount);
        void			beRepaired(unsigned int amount);

    protected:
        std::string     _name;
        unsigned int	_hit;
        unsigned int	_energy;
        unsigned int	_attack;
};

#endif
