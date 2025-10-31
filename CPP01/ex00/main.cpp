#include "Zombie.hpp"

int main() {
    Zombie* z = newZombie("Carlos");
    z->announce();

    std::cout << "\nCreating a random chump:\n";
    randomChump("Ana");

    std::cout << "\nAnnouncing first zombie:\n";
    z->announce();
    delete z;

    return 0;
}
