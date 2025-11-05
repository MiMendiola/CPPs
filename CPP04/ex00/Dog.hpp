#ifndef __DOG_H__
#define __DOG_H__

// ************************************************************************** //
//                                Dog Class                              //
// ************************************************************************** //
#include "Animal.hpp"

class Dog : public Animal{
    public:
        Dog();
        Dog(const Dog &other);
        Dog &operator=(const Dog &Dog);
        ~Dog();
        
        void    makeSound() const;
};

#endif
