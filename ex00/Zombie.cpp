#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    _name = name;
    std::cout << "Zombie: " << name << " woke up after a long sleep...\n";
}

void Zombie::announce()
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie()
{
    std::cout << "Zombie: " << this->_name << " is no longer alive...\n";
}
