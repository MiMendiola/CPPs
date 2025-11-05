#ifndef __DOG_H__
#define __DOG_H__

// ************************************************************************** //
//                                Dog Class                              //
// ************************************************************************** //
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
    public:
        Dog();
        Dog(const Dog &other);
        Dog &operator=(const Dog &Dog);
        ~Dog();
        
        void     makeSound() const;
        void     getIdea(int index) const;
        void     setIdea(std::string idea, int index);

    private:
        Brain* brain;
};

#endif
