#include <iostream>
int main()
{
    std::string string  = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string; 

    //print address
    std::cout << "\n-----------print_address------------\n";
    std::cout << &string << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    //print value 
    std::cout << "\n-----------print_value------------\n";
    std::cout << string << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
}