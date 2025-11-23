#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
    std::cout << BLUE << "Bureaucrat Default Constructor Called!" << RESET << std::endl;
}

Bureaucrat::Bureaucrat(std::string name) : _name(name), _grade(150)
{
    std::cout << BLUE << "Bureaucrat Name Constructor Called!" << RESET << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    if (grade < 1)
        throw GradeTooLowException();
    if (grade > 150)
        throw GradeTooHighException();
    std::cout << BLUE << "Bureaucrat Parameters Constructor Called!" << RESET << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade)
{
    *this = other;
    std::cout << BLUE << "Bureaucrat Copy Constructor Called!" << RESET << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &Bureaucrat)
{
    if (this != &Bureaucrat) {
        this->_grade = Bureaucrat._grade;
    }
    std::cout << BLUE << "Bureaucrat Copy Assignment Constructor Called!" << RESET << std::endl;

    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << BLUE << "Bureaucrat Destructor Called!" << RESET << std::endl;
}

std::string    Bureaucrat::getName() const
{
    return this->_name;
}

int             Bureaucrat::getGrade() const
{
    return this->_grade;
}

void            Bureaucrat::incrementGrade()
{
    if (this->_grade < 1)
        throw Bureaucrat::GradeTooLowException();
    this->_grade--;
}

void            Bureaucrat::decrementGrade()
{
    if (this->_grade > 150)
        throw Bureaucrat::GradeTooHighException();
    this->_grade++;
}

void            Bureaucrat::signForm(AForm &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << "This form: " << form.getName() << " has been signed from " << this->getName() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "This form: " << form.getName() << " couldn’t be signed by " << this->getName() << " because " << e.what() << std::endl;
    }
}

void            Bureaucrat::executeForm(AForm const &form) const
{
    try
    {
        form.execute(*this);
        std::cout << "Bureaucrat " << this->getName() << " executed " << form.getName() << " succesfully! " << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "Bureaucrat " << this->getName() << " couldn’t executed " << form.getName() << " because " << e.what() << std::endl;
    }
}

std::ostream &operator<<(std::ostream& stream, const Bureaucrat &bureaucrat)
{
	stream << bureaucrat.getName() << ", bureaucrat grade: " << bureaucrat.getGrade() << std::endl;
	return stream;
}
