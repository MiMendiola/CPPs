#ifndef __SHRUBBERYCREATIONFORM_H__
#define __SHRUBBERYCREATIONFORM_H__

//   COLORS
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define RESET   "\033[0m"

// ************************************************************************** //
//                       ShrubberyCreationForm Class                          //
// ************************************************************************** //
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm: public AForm {
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &other);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &ShrubberyForm);
        virtual ~ShrubberyCreationForm();

        virtual void    execute(Bureaucrat const & executor) const;

    private:
        class FileNotOpen : public std::exception {
            const char *what() const throw() {
                return "This file can not open";
            }
        };
        
};

#endif
