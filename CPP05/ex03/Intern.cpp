#include "Intern.hpp"

Intern::Intern()
{
    std::cout << BLUE << "Intern Default Constructor Called!" << RESET << std::endl;
}

Intern::Intern(const Intern &other)
{
    *this = other;
    std::cout << BLUE << "Intern Copy Constructor Called!" << RESET << std::endl;
}

Intern &Intern::operator=(const Intern &Intern)
{
    std::cout << BLUE << "Intern Copy Assignment Constructor Called!" << RESET << std::endl;
    (void)Intern;
    return (*this);
}

Intern::~Intern()
{
    std::cout << BLUE << "Intern Destructor Called!" << RESET << std::endl;
}

AForm           *Intern::makeForm(std::string formName, std::string targetForm)
{
    std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

    if (targetForm.empty())
        throw Intern::NoTargetForm();

    for (int i = 0; i < 3; i++)
    {
        if (forms[i] == formName)
        {
            std::cout << "Intern creates " << formName << " form." << "\n";
            switch (i)
			{
				case 0:
					return new ShrubberyCreationForm(targetForm);
				case 1:
					return new RobotomyRequestForm(targetForm);
				case 2:
					return new PresidentialPardonForm(targetForm);
			}
        }
    }
    throw Intern::NoNameForm();
}
