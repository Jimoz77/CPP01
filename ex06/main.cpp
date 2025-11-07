#include "Harl.hpp"

//rajouter des /n dans les message pour ressembler a la donnee

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        std::cerr << "Wrong arguments\n";
        return 1;
    }
    Harl harl;

    harl.complain(argv[1]);
}