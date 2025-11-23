#ifndef __INTERN_H__
#define __INTERN_H__

//   COLORS
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define RESET   "\033[0m"

// ************************************************************************** //
//                                Intern Class                                 //
// ************************************************************************** //
#include <iostream>
#include <string>
#include <cmath>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
    public:
        Intern();
        Intern(const Intern &other);
        Intern &operator=(const Intern &Intern);
        virtual ~Intern();

        AForm*           makeForm(std::string formName, std::string targetForm);

    private:
        class NoTargetForm : public std::exception {
            const char *what() const throw() {
                return "There is no target.";
            }
        };

        class NoNameForm : public std::exception {
            const char *what() const throw() {
                return "There is no form called like that.";
            }
        };

};

#endif
