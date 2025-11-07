#ifndef __HARL_H__
#define __HARL_H__

#include <iostream>



class Harl
{
private:
    void debug( void ) {std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!\n\n";}
    void info( void ) {std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n\n";}
    void warning( void ) {std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI’ve been coming for years, whereas you started working here just last month\n\n";}
    void error( void ) {std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n\n";}
    public:
    Harl(/* args */);
    void    complain(std::string level);
    ~Harl();
};


struct Association
{
    std::string niveau;
    int caseNumber;
};









#endif