#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    _name = name;
}

void Zombie::announce()
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie()
{
}
