#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Form", 72, 45, "No")
{
    std::cout << BLUE << "RobotomyRequestForm Default Constructor Called!" << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy Form", 72, 45, target)
{
    std::cout << BLUE << "RobotomyRequestForm Target Constructor Called!" << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other.getName(), other.getGradeSign(), other.getGradeExecute(), other.getTarget())
{
    std::cout << BLUE << "RobotomyRequestForm Copy Constructor Called!" << RESET << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &RobotomyRequestForm)
{
    if (this != &RobotomyRequestForm) {
        this->getTarget() = RobotomyRequestForm.getTarget();
    }
    std::cout << BLUE << "RobotomyRequestForm Copy Assignment Constructor Called!" << RESET << std::endl;

    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << BLUE << "RobotomyRequestForm Destructor Called!" << RESET << std::endl;
}

void    RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (this->getGradeExecute() < executor.getGrade())
        throw AForm::GradeTooLowException();
    if (!this->getIsSigned())
        throw AForm::AFormIsSigned();

    std::cout << "RobotomyRequestForm drilling noises" << std::endl;

    srand(time(NULL));
    if (rand() % 2)
        std::cout << this->getTarget() << " has been robotomized successfully!" << std::endl;
    else
        std::cout << this->getTarget() << " has robotomy failed." << std::endl;


}
