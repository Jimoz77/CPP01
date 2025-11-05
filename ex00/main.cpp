#include "Zombie.hpp"

int main()
{
    Zombie* zomb = newZombie("justin");
    zomb->announce();

    randomChump("bridou");
    delete zomb;

}