#ifndef __ANIMAL_H__
#define __ANIMAL_H__

//   COLORS
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define RESET   "\033[0m"

// ************************************************************************** //
//                                Animal Class                              //
// ************************************************************************** //
#include <iostream>
#include <string>
#include <cmath>

class Animal {
    public:
        Animal();
        Animal(const Animal &other);
        Animal &operator=(const Animal &Animal);
        virtual ~Animal();
        
        std::string     getType() const;
        virtual void    makeSound() const;

    protected:
        std::string     type;
};

#endif
