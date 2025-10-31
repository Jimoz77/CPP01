#include <iostream>


int main()
{
    std::string brain = "HI THIS IS BRAIN";

    std::string* stringPTR = &brain;
    std::string& stringREF = brain;

    std::cout << "Adresse de la varible brain : " << &brain << "\n";
    std::cout << "Adresse contenue dans stringPTR : " << stringPTR << "\n";
    std::cout << "Adresse de stringREF : " << &stringREF << "\n\n";

    std::cout << "Valeur de brain : " << brain << "\n";
    std::cout << "Valeur pointée par stringPTR : " << *stringPTR << "\n";
    std::cout << "Valeur de stringREF : " << stringREF << "\n";

    return 0;

}