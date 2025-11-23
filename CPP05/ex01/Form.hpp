#ifndef __FORM_H__
#define __FORM_H__

//   COLORS
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define RESET   "\033[0m"

// ************************************************************************** //
//                               Form Class                             //
// ************************************************************************** //
#include <iostream>
#include <string>
#include <cmath>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    public:
        Form();
        Form(std::string name,int gradeToSign, int gradeToExecute);
        Form(const Form &other);
        Form &operator=(const Form &Form);
        virtual ~Form();

        std::string     getName() const;
        bool            getIsSigned() const;
        int             getGradeSign() const;
        int             getGradeExecute() const;

        void            beSigned(const Bureaucrat &Bureaucrat);

    private:
        const std::string       _name;
        bool                    _isSigned;
        const int               _gradeToSign;
        const int               _gradeToExecute;

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

        class FormIsSigned : public std::exception {
            const char *what() const throw() {
                return "This form is already signed";
            }
        };
};

std::ostream &operator<<(std::ostream& stream, const Form &Form);

#endif
