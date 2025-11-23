#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    // EXEC ShrubberyCreationForm(137), RobotomyRequestForm(45), PresidentialPardonForm(5)
    Bureaucrat Jose("Jose", 2);
    Bureaucrat Pablo("Pablo", 40);
    Bureaucrat Miguel("Miguel", 125);
    Bureaucrat DonNadie("Don Nadie", 150);

    ShrubberyCreationForm formS("SCR");
	RobotomyRequestForm formR("RRF");
	PresidentialPardonForm formP("PPF");

    std::cout << &formS << ", form content: " << formS;
    std::cout << &formR << ", form content: " << formR;
    std::cout << &formP << ", form content: " << formP << std::endl;


    try
    {
        ShrubberyCreationForm a("ShrubberyCreationFormA");
        ShrubberyCreationForm b("ShrubberyCreationFormB");
        ShrubberyCreationForm c("ShrubberyCreationFormC");
        ShrubberyCreationForm d("ShrubberyCreationFormD");

        Jose.signForm(a);
        std::cout << "Form content: " << a;
	    Jose.executeForm(a);
        std::cout << std::endl;

        Pablo.signForm(b);
        std::cout << "Form content: " << b;
	    Pablo.executeForm(b);
        std::cout << std::endl;
        
        Miguel.signForm(c);
        std::cout << "Form content: " << c;
	    Miguel.executeForm(c);
        std::cout << std::endl;
        
        DonNadie.signForm(d);
        std::cout << "Form content: " << d;
	    DonNadie.executeForm(d);
        std::cout << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "ShrubberyCreationForm: " << e.what() << std::endl;
    }


    try
    {
        RobotomyRequestForm a("RobotomyRequestFormA");
        RobotomyRequestForm b("RobotomyRequestFormB");
        RobotomyRequestForm c("RobotomyRequestFormC");
        RobotomyRequestForm d("RobotomyRequestFormD");

        Jose.signForm(a);
        std::cout << "Form content: " << a;
	    Jose.executeForm(a);
        std::cout << std::endl;

        Pablo.signForm(b);
        std::cout << "Form content: " << b;
	    Pablo.executeForm(b);
        std::cout << std::endl;
        
        Miguel.signForm(c);
        std::cout << "Form content: " << c;
	    Miguel.executeForm(c);
        std::cout << std::endl;
        
        DonNadie.signForm(d);
        std::cout << "Form content: " << d;
	    DonNadie.executeForm(d);
        std::cout << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "RobotomyRequestForm: " << e.what() << std::endl;
    }


    try
    {
        PresidentialPardonForm a("PresidentialPardonFormA");
        PresidentialPardonForm b("PresidentialPardonFormB");
        PresidentialPardonForm c("PresidentialPardonFormC");
        PresidentialPardonForm d("PresidentialPardonFormD");

        Jose.signForm(a);
        std::cout << "Form content: " << a;
	    Jose.executeForm(a);
        std::cout << std::endl;

        Pablo.signForm(b);
        std::cout << "Form content: " << b;
	    Pablo.executeForm(b);
        std::cout << std::endl;
        
        Miguel.signForm(c);
        std::cout << "Form content: " << c;
	    Miguel.executeForm(c);
        std::cout << std::endl;
        
        DonNadie.signForm(d);
        std::cout << "Form content: " << d;
	    DonNadie.executeForm(d);
        std::cout << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "PresidentialPardonForm: " << e.what() << std::endl;
    }

    return 0;
}