#ifndef __BUREAUCRAT_H__
#define __BUREAUCRAT_H__

//   COLORS
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define RESET   "\033[0m"

// ************************************************************************** //
//                               BUREAUCRAT Class                             //
// ************************************************************************** //
#include <iostream>
#include <string>
#include <cmath>
#include "AForm.hpp"

class AForm;

class Bureaucrat {
    public:
        Bureaucrat();
        Bureaucrat(std::string name);
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &other);
        Bureaucrat &operator=(const Bureaucrat &Bureaucrat);
        virtual ~Bureaucrat();

        std::string     getName() const;
        int             getGrade() const;

        void            incrementGrade();
        void            decrementGrade();
        void            signForm(AForm &form);
        void            executeForm(AForm const & form) const;

    private:
        const std::string       _name;
        int                     _grade;

        class GradeTooHighException : public std::exception {
            const char *what() const throw() {
                return "Grade is too high";
            }
        };

        class GradeTooLowException : public std::exception {
            const char *what() const throw() {
                return "Grade is too low";
            }
        };
};

std::ostream &operator<<(std::ostream& stream, const Bureaucrat &bureaucrat);

#endif
