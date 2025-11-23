#include "Form.hpp"

Form::Form() : _name("Default"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150)
{
    std::cout << BLUE << "Form Default Constructor Called!" << RESET << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw Form::GradeTooLowException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw Form::GradeTooHighException();
    std::cout << BLUE << "Form Parameters Constructor Called!" << RESET << std::endl;
}

Form::Form(const Form &other) : _name(other._name), _isSigned(other._isSigned), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
    std::cout << BLUE << "Form Copy Constructor Called!" << RESET << std::endl;
}

Form &Form::operator=(const Form &Form)
{
    if (this != &Form) {
        this->_isSigned = Form._isSigned;
    }
    std::cout << BLUE << "Form Copy Assignment Constructor Called!" << RESET << std::endl;

    return (*this);
}

Form::~Form()
{
    std::cout << BLUE << "Form Destructor Called!" << RESET << std::endl;
}

std::string    Form::getName() const
{
    return this->_name;
}

bool            Form::getIsSigned() const
{
    return this->_isSigned;
}

int             Form::getGradeSign() const
{
    return this->_gradeToSign;
}

int             Form::getGradeExecute() const
{
    return this->_gradeToExecute;
}

void            Form::beSigned(const Bureaucrat &Bureaucrat)
{
    if (this->_gradeToSign < Bureaucrat.getGrade() )
        throw Form::GradeTooLowException();
    if (this->_isSigned)
        throw Form::FormIsSigned();
    else
        this->_isSigned = true;        
}

std::ostream &operator<<(std::ostream& stream, const Form &Form)
{
    std::string isSigned;
    if (!Form.getIsSigned())
        isSigned = "No";
    else
    {
        isSigned = "Yes";
    }

	stream  << Form.getName()
            << ", Form is isgned?: " << isSigned
            << ", grade required to sign it: "<< Form.getGradeSign()
            << ", grade required to execute it: " << Form.getGradeExecute()
            << std::endl;
	return stream;
}
