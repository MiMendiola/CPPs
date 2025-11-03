#include "Harl.hpp"

std::string	stringToUpper(std::string string)
{
	for (size_t i = 0; i < string.length(); i++) {
        string[i] = std::toupper(string[i]);
    }
    return string;
}

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

    harl.complain(stringToUpper(av[1]));

    return 0;
}
