#include <iostream>
#include <string>

int main()
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *stringPTR = &brain; 
    std::string &stringREF = brain;

    std::cout << "\nMemory address of the string variable: " << &brain << "\n";
    std::cout << "Memory address held by stringPTR: " << stringPTR << "\n";
    std::cout << "Memory address held by stringREF: " << &stringREF << "\n\n";

    std::cout << "Value of the string variable: " << brain << "\n";
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << "\n";
    std::cout << "Value pointed to by stringREF: " << stringREF << "\n\n";

    return 0;
}