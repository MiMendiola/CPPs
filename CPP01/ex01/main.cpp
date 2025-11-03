#include "Zombie.hpp"

int main()
{
    Zombie *horde;
    std::string zombies;

    std::cout << "Introduce el numero de zombies para tu horda:\n";
    if (!std::getline(std::cin, zombies)) {
        if (std::cin.eof()) {
            return 0;
        }
    }

    std::stringstream ss(zombies);
    int n;
    ss >> n;
    if (ss.fail() || n <= 0)
    {
        std::cout << "Entrada no válida.\n";
        return 0;
    }

    horde = zombieHorde(n, "Zed");
    if (!horde)
        return 0;

    for (int i = 0; i < n; i++)
    {
        std::cout << "Soy zombie " << i << " ";
        horde[i].announce();
    }

    delete[] horde;
    
    return 0;
}
