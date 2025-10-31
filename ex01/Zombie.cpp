#include "Zombie.hpp"

Zombie::Zombie()
{
}

void Zombie::setName(std::string name)
{
    _name = name;
}

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
