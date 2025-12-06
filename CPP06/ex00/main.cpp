#include "ScalarConverter.hpp"

int main(int ac, char *av[])
{
    if (ac != 2)
    {
        std::cout << RED << "Please insert only one argument.\n" << RESET;
        return 1;
    }
    ScalarConverter::convert(av[1]);

    return 0;
}