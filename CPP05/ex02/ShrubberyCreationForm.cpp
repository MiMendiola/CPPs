#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyForm", 145, 137, "No")
{
    std::cout << BLUE << "ShrubberyCreationForm Default Constructor Called!" << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyForm", 145, 137, target)
{
    std::cout << BLUE << "ShrubberyCreationForm Target Constructor Called!" << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other.getName(), other.getGradeSign(), other.getGradeExecute(), other.getTarget())
{
    std::cout << BLUE << "ShrubberyCreationForm Copy Constructor Called!" << RESET << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &ShrubberyCreationForm)
{
    if (this != &ShrubberyCreationForm) {
        this->getTarget() = ShrubberyCreationForm.getTarget();
    }
    std::cout << BLUE << "ShrubberyCreationForm Copy Assignment Constructor Called!" << RESET << std::endl;

    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << BLUE << "ShrubberyCreationForm Destructor Called!" << RESET << std::endl;
}

void    ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (this->getGradeExecute() < executor.getGrade())
        throw AForm::GradeTooLowException();
    if (!this->getIsSigned())
        throw AForm::AFormIsSigned();
    
    std::string name = this->getTarget() + "_shrubbery";
    std::ofstream completeFile(name.c_str());
    if (!completeFile.is_open())
    {
        throw ShrubberyCreationForm::FileNotOpen();
    }

    completeFile    << "      ccee88oo\n"
                    << "  C8O8O8Q8PoOb o8oo\n"
                    << " dOB69QO8PdUOpugoO9bD\n"
                    << "CgggbU8OU qOp qOdoUOdcb\n"
                    << "    6OuU  /p u gcoUodpP\n"
                    << "      \\\\//  /douUP\n"
                    << "        \\\\////\n"
                    << "         |||/\\\n"
                    << "         |||\\/\n"
                    << "         |||||\n"
                    << "   .....//||||\\....\n";

    completeFile.close();
}
