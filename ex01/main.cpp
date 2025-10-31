#include "Zombie.hpp"

int main()
{
    Zombie* zomb = newZombie("justin");
    zomb->announce();

    delete zomb;

    int hordeSize = 5;
    Zombie* horde = zombieHorde(hordeSize, "Horde Member");

    for (int i = 0; i < hordeSize; i++)
        horde[i].announce();
    
    delete[] horde;

    return 0;    
}