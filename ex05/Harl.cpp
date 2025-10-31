#include "Harl.hpp"

Harl::Harl()
{
}


void Harl::complain(std::string level)
{
    Association association[] = 
    {
        {"DEBUG", &Harl::debug},
        {"INFO", &Harl::info},
        {"WARNING", &Harl::warning},
        {"ERROR", &Harl::error}
    };


    for(int i = 0; i < 4; i++)
    {
        if(association[i].niveau == level)
        {
            void (Harl::*rightfunc)() = association[i].fonction;
            (this->*rightfunc)();
            return;
        }
    }

    std::cout << "Level unknown: " << level << "\n";
}




Harl::~Harl()
{
}
