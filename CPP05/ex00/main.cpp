#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat a;
    Bureaucrat b( a );
    Bureaucrat c("Paco");
    Bureaucrat d("Pedro", 50);
    Bureaucrat e;
    e = a;


    std::cout << &a << ", bureaucrat content: " << a;
    std::cout << &b << ", bureaucrat content: " << b;
    std::cout << &c << ", bureaucrat content: " << c;
    std::cout << &d << ", bureaucrat content: " << d;
    std::cout << &e << ", bureaucrat content: " << e << std::endl;

    try
    {
        Bureaucrat a("Alfonso", 3);
        
        a.incrementGrade();
        std::cout << "INCREMENT " << a << std::endl;

        a.decrementGrade();
        std::cout << "DECREMENT " << a << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat a("Pepe", 151);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat a("Pepe", -10);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}