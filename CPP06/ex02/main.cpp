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
        std::cout << "Type A" << std::endl;
        return ;
    }
    catch(const std::exception& e)
    {
        try
        {
            (void)dynamic_cast<B&>(p);
            std::cout << "Type B" << std::endl;
            return ;
        }
        catch(const std::exception& e)
        {
            try
            {
                (void)dynamic_cast<C&>(p);
                std::cout << "Type C" << std::endl;
                return ;
            }
            catch(const std::exception& e)
            {
                std::cout << "Not identified" << std::endl;
            }
        }
    }
}

int main()
{
    srand(static_cast<unsigned int>(time(NULL)));
    {
        Base* base = generate();
        /* Base* base = new Base(); */

        identify(base);

        identify(*base);

        delete base;
    }

    return 0;
}