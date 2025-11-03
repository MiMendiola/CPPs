#include <iostream>
#include <string>
#include <fstream>

int main(int ac, char *av[])
{
    if (ac != 4)
    {
        std::cout << "We need 4 arguments" << '\n';
        return 0;
    }

    std::string s1 = av[2];
    std::string s2 = av[3];

    std::ifstream file(av[1]);
    if (!file.is_open())
    {
        std::cout << "Error opening file: " << av[1] << '\n';
        return 1;
    }

    std::string newName = std::string(av[1]) + ".replace";
    std::ofstream newFile(newName.c_str()); // necesito recibir una cadena const
    if (!newFile.is_open())
    {
        std::cout << "Error creating the new file: " << newName << '\n';
        return 1;
    }

    std::string line;
    std::size_t pos;
    std::size_t lastPos;
    
    while (std::getline(file, line))
    {
        std::string lineToAppend;
        lastPos = pos = 0;
        
        // constante estática de la clase std::string que representa “ninguna posición válida” o “no encontrado” = 18446744073709551615
        while ((pos = line.find(s1, lastPos)) != std::string::npos)
        {
            lineToAppend.append(line, lastPos, pos - lastPos);
            lineToAppend += s2;
            lastPos =  pos + s1.length();
        }
        if (lastPos <= line.find(s1, pos))
            lineToAppend.append(line, lastPos, std::string::npos);
        
        newFile << lineToAppend << "\n";
    }

    return 0;
}
