#ifndef __AFORM_H__
#define __AFORM_H__

//   COLORS
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define RESET   "\033[0m"

// ************************************************************************** //
//                               AForm Class                             //
// ************************************************************************** //
#include <iostream>
#include <string>
#include <cmath>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
    public:
        AForm();
        AForm(std::string name,int gradeToSign, int gradeToExecute);
        AForm(std::string name,int gradeToSign, int gradeToExecute, std::string target);
        AForm(const AForm &other);
        AForm &operator=(const AForm &AForm);
        virtual ~AForm();

        std::string     getName() const;
        std::string     getTarget() const;
        bool            getIsSigned() const;
        int             getGradeSign() const;
        int             getGradeExecute() const;

        void            beSigned(const Bureaucrat &Bureaucrat);
        virtual void    execute(Bureaucrat const & executor) const = 0;

        class AFormIsSigned : public std::exception {
            const char *what() const throw() {
                return "This Aform is already signed";
            }
        };

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

    private:
        const std::string       _name;
        bool                    _isSigned;
        const int               _gradeToSign;
        const int               _gradeToExecute;
        const std::string       _target;
};

std::ostream &operator<<(std::ostream& stream, const AForm &AForm);

#endif
