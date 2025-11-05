#ifndef __CAT_H__
#define __CAT_H__

//   COLORS
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define RESET   "\033[0m"

// ************************************************************************** //
//                                Cat Class                              //
// ************************************************************************** //
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
    public:
        Cat();
        Cat(const Cat &other);
        Cat &operator=(const Cat &Cat);
        ~Cat();
        
        void    makeSound() const;
        void    getIdea(int index) const;
        void    setIdea(std::string idea, int index);
    
    private:
        Brain* brain;
};

#endif
