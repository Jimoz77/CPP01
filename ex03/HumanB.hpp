#ifndef __HUMANB_H__
#define __HUMANB_H__

#include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon* _weapon;
public:
    HumanB(std::string name);
    void setWeapon(Weapon& weapon);
    void attack();
};








#endif