#include "AForm.hpp"

AForm::AForm() : _name("Default"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150), _target("No")
{
    std::cout << BLUE << "AForm Default Constructor Called!" << RESET << std::endl;
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute, std::string target) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _target(target)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw AForm::GradeTooLowException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw AForm::GradeTooHighException();
    std::cout << BLUE << "AForm Parameters Constructor Called!" << RESET << std::endl;
}

AForm::AForm(const AForm &other) : _name(other._name), _isSigned(other._isSigned), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute), _target(other._target)
{
    std::cout << BLUE << "AForm Copy Constructor Called!" << RESET << std::endl;
}

AForm &AForm::operator=(const AForm &AForm)
{
    if (this != &AForm) {
        this->_isSigned = AForm._isSigned;
    }
    std::cout << BLUE << "AForm Copy Assignment Constructor Called!" << RESET << std::endl;

    return (*this);
}

AForm::~AForm()
{
    std::cout << BLUE << "AForm Destructor Called!" << RESET << std::endl;
}

std::string    AForm::getName() const
{
    return this->_name;
}

std::string    AForm::getTarget() const
{
    return this->_target;
}

bool            AForm::getIsSigned() const
{
    return this->_isSigned;
}

int             AForm::getGradeSign() const
{
    return this->_gradeToSign;
}

int             AForm::getGradeExecute() const
{
    return this->_gradeToExecute;
}

void            AForm::beSigned(const Bureaucrat &Bureaucrat)
{
    if (this->_gradeToSign < Bureaucrat.getGrade() )
        throw AForm::GradeTooLowException();
    if (this->_isSigned)
        throw AForm::AFormIsSigned();
    else
        this->_isSigned = true;        
}

std::ostream &operator<<(std::ostream& stream, const AForm &AForm)
{
    std::string isSigned;
    if (!AForm.getIsSigned())
        isSigned = "No";
    else
    {
        isSigned = "Yes";
    }

	stream  << AForm.getName()
            << ", AForm is isgned?: " << isSigned
            << ", grade required to sign it: "<< AForm.getGradeSign()
            << ", grade required to execute it: " << AForm.getGradeExecute()
            << std::endl;
	return stream;
}
