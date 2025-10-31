#include "Zombie.hpp"

int main()
{
    Zombie* zomb = newZombie("justin");
    zomb->announce();

    delete zomb;
    randomChump("bridou");

}