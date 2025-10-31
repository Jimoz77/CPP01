#include "Harl.hpp"

Harl::Harl()
{
}


void Harl::complain(std::string level)
{
    Association association[] = 
    {
        {"DEBUG", 0},
        {"INFO", 1},
        {"WARNING", 2},
        {"ERROR", 3}
    };
    int i = 0;
    int levelIndex = -1;
    while (i < 4)
    {
        if(association[i].niveau == level)
        {
            levelIndex = association[i].caseNumber;
            break;
        }
        i++;
    }
        
    
    switch (levelIndex)
    {
    case 0:
        debug();
    case 1:
        info();
    case 2:
        warning();
    case 3:
        error();
        break;
    
    default:
        std::cout << "[ Probably complaining about insignificant problems ]\n";
    }
   
}




Harl::~Harl()
{
}
