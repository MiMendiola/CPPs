#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("ShrubberyForm", 25, 5, "No")
{
    std::cout << BLUE << "PresidentialPardonForm Default Constructor Called!" << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("ShrubberyForm", 25, 5, target)
{
    std::cout << BLUE << "PresidentialPardonForm Target Constructor Called!" << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other.getName(), other.getGradeSign(), other.getGradeExecute(), other.getTarget())
{
    std::cout << BLUE << "PresidentialPardonForm Copy Constructor Called!" << RESET << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &PresidentialPardonForm)
{
    if (this != &PresidentialPardonForm) {
        this->getTarget() = PresidentialPardonForm.getTarget();
    }
    std::cout << BLUE << "PresidentialPardonForm Copy Assignment Constructor Called!" << RESET << std::endl;

    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << BLUE << "PresidentialPardonForm Destructor Called!" << RESET << std::endl;
}

void    PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (this->getGradeExecute() < executor.getGrade())
        throw AForm::GradeTooLowException();
    if (!this->getIsSigned())
        throw AForm::AFormIsSigned();

    std::cout << this->getTarget() << " PresidentialPardonForm has been pardoned by Zaphod Beeblebrox." << std::endl;



}
