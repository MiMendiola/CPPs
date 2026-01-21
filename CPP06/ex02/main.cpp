#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base * generate(void)
{
    int rnd = rand() % 3 + 1;

    if (rnd == 1)
        return new A();
    else if (rnd == 2)
        return new B();
    else
        return new C();
}

void identify(Base* p)
{
    std::cout << "Identify with POINTER (*): ";

    if (dynamic_cast<A*>(p))
        std::cout << "Type A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "Type B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "Type C" << std::endl;
    else
        std::cout << "Not identified" << std::endl;
}

void identify(Base& p)
{
    std::cout << "Identify by REFERENCE (&): ";

    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "Type A\n" << std::endl;
        return ;
    }
    catch(const std::exception& e)
    {
        try
        {
            (void)dynamic_cast<B&>(p);
            std::cout << "Type B\n" << std::endl;
            return ;
        }
        catch(const std::exception& e)
        {
            try
            {
                (void)dynamic_cast<C&>(p);
                std::cout << "Type C\n" << std::endl;
                return ;
            }
            catch(const std::exception& e)
            {
                std::cout << "Not identified\n" << std::endl;
            }
        }
    }
}

int main()
{
    srand(static_cast<unsigned int>(time(NULL)));

    for (int i = 1; i < 11 ; i++)
    {
        Base* base = generate();
        std::cout << "Base: " << i << std::endl;
        identify(base);
        identify(*base);
        delete base;
    }


    return 0;
}