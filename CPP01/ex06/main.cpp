#include "Harl.hpp"

int main(int ac, char *av[])
{
    if (ac < 2)
    {
        std::cout << "Harl needs something to complain about" << '\n';
        return 0;
    }
    else if (ac > 2)
    {
        std::cout << "Harl have plenty things to complain about" << '\n';
        return 0;
    }

    Harl harl;

    harl.complain(av[1]);

    return 0;
}
