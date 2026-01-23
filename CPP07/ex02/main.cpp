#include "Array.hpp"

int main()
{
    try
    {
        std::cout << "--- Empty array ---" << std::endl;
        Array<int> ints;
        std::cout << ints.size() << std::endl;
        std::cout << std::endl;


        std::cout << "--- Array of n elements ---" << std::endl;
        Array<int> intsN(5);
        for(size_t i = 0; i < 5; i++) {
            intsN[i] = i * 10;
        }
        for(size_t i = 0; i < 5; i++) {
            std::cout << "Int: " << intsN[i] << std::endl;
        }
        std::cout << std::endl;

         std::cout << "--- Copy constructor ---" << std::endl;
        Array<int> copy(intsN);
        for(size_t i = 0; i < copy.size(); i++) {
            std::cout << "Copy [" << i << "]: " << copy[i] << std::endl;
        }
        std::cout << std::endl;

        
        std::cout << "--- Assigment constructor ---" << std::endl;
        Array<int> assigment;
        assigment = copy;
        std::cout << "Assigment[0]: " << assigment[0] << std::endl;
        assigment[0] = 100;
        std::cout << "Assigment[0]: " << assigment[0] << std::endl;
        std::cout << "Copy[0]: " << copy[0] << std::endl;
        std::cout << std::endl;
       

        std::cout << "--- Strings ---" << std::endl;
        Array<std::string> strings(1);
        strings[0] = "Hola!";
        std::cout << "strings[0]: " << strings[0] << std::endl;
        std::cout << std::endl;


        std::cout << "--- Multiple Strings ---" << std::endl;
        Array<std::string> multiplStrings(3);
        multiplStrings[0] = "Hola,";
        multiplStrings[1] = "que";
        multiplStrings[2] = "tal!";
        for (size_t i = 0; i < multiplStrings.size(); i++)
            std::cout << "multiplStrings[" << i << "]: " << multiplStrings[i] << std::endl;
        std::cout << std::endl;


        std::cout << "--- Out of range ---" << std::endl;
        Array<std::string> outRange;
        outRange[0] = "Hola!";
        std::cout << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << '\n';
    }
    

    return 0;
}