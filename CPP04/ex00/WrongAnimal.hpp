#ifndef __WRONGANIMAL_H__
#define __WRONGANIMAL_H__

//   COLORS
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define RESET   "\033[0m"

// ************************************************************************** //
//                                WrongAnimal Class                              //
// ************************************************************************** //
#include <iostream>
#include <string>
#include <cmath>

class WrongAnimal {
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &other);
        WrongAnimal &operator=(const WrongAnimal &WrongAnimal);
        virtual ~WrongAnimal();
        
        std::string     getType() const;
        void    makeSound() const;

    protected:
        std::string     type;
};

#endif
