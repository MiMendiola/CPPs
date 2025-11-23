#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    // EXEC ShrubberyCreationForm(137), RobotomyRequestForm(45), PresidentialPardonForm(5)
    Bureaucrat Mendi("Mendi", 1);
    Intern someRandomIntern;

    try
    {
        AForm* SCR;

        SCR = someRandomIntern.makeForm("shrubbery creation", "TargetPrueba");
        Mendi.signForm(*SCR);
        Mendi.executeForm(*SCR);
        delete SCR;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        AForm* RRF;
        
        RRF = someRandomIntern.makeForm("robotomy request", "TargetPrueba");
        Mendi.signForm(*RRF);
        Mendi.executeForm(*RRF);
        delete RRF;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        AForm* PPF;
        
        PPF = someRandomIntern.makeForm("presidential pardon", "TargetPrueba");
        Mendi.signForm(*PPF);
        Mendi.executeForm(*PPF);
        delete PPF;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        AForm* PPF;
        
        PPF = someRandomIntern.makeForm("something", "TargetPrueba");
        Mendi.signForm(*PPF);
        Mendi.executeForm(*PPF);
        delete PPF;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        AForm* PPF;
        
        PPF = someRandomIntern.makeForm("presidential pardon", "");
        Mendi.signForm(*PPF);
        Mendi.executeForm(*PPF);
        delete PPF;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}