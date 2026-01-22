#include "iter.hpp"

int main()
{
    int ints[5] = {1,2,3,4,5};
    iter(ints, 5, print<int>);
    std::cout << std::endl;

    std::string strings[5] = {"Hola", "Como", "Estas", "Tu", "?"};
    iter(strings, 5, print<std::string>);
    std::cout << std::endl;

    char characters[5] = {'H', 'O', 'L', 'A', '!'};
    iter(characters, 5, print<char>);

    return 0;
}