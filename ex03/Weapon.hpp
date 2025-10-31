#ifndef __WEAPON_H__
#define __WEAPON_H__

#include <iostream>




class Weapon
{
private:
    std::string type;

public:
    Weapon(std::string type);
    std::string& getType();
    void setType(std::string newType);
    ~Weapon();
};











#endif