#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat Pablo("Pablo", 50);

    Form a;
    Form b (a);
    Form c ("FormC", 10, 10);
    Form d;
    d = c;

    std::cout << &a << ", form content: " << a;
    std::cout << &b << ", form content: " << b;
    std::cout << &c << ", form content: " << c;
    std::cout << &d << ", form content: " << d << std::endl;


    Pablo.signForm(c);
    std::cout << "Form content: " << c << std::endl;

    Pablo.signForm(a);
    std::cout << "Form content: " << a << std::endl;

    try
    {
        Form a("FormA", 151, 151);
    }
    catch (std::exception & e)
    {
        std::cout << "FormA: " << e.what() << std::endl;
    }

    try
    {
        Form a("FormA", 0, 0);
    }
    catch (std::exception & e)
    {
        std::cout << "FormA: " << e.what() << std::endl;
    }

    return 0;
}