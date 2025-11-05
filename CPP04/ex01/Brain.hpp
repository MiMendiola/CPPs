#ifndef __BRAIN_H__
#define __BRAIN_H__

//   COLORS
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define RESET   "\033[0m"

// ************************************************************************** //
//                                Brain Class                              //
// ************************************************************************** //
#include <iostream>
#include <string>
#include <cmath>

class Brain {
    public:
        Brain();
        Brain(const Brain &other);
        Brain &operator=(const Brain &Brain);
        virtual ~Brain();
        
        void    getIdea(int index) const;
        void    setIdea(std::string idea, int index);
        void    printIdeas();

    private:
        std::string     ideas[100];
};

#endif
