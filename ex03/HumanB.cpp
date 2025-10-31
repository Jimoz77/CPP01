#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), _weapon(NULL)
{
}

void HumanB::setWeapon(Weapon& weapon)
{
    _weapon = &weapon;
}

void HumanB::attack()
{
    if (_weapon)
        std::cout << name << " attacks with their " << _weapon->getType() << "\n";
    else
        std::cout << name << " has no weapon!\n";
    
}