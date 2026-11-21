#include "Harl.hpp"
 void Harl::debug(void){
    std::cout << "I love having extra bacon for my 7XL. . . " << std::endl;
 }
 void Harl::info(void){
    std::cout << "I cannot believe adding extra bacon costs mo. . . " << std::endl;
 }
void Harl::warning(void){
    std::cout << "I think I deserve to have some ext. . . " << std::endl;
}
void Harl::error(){
    std::cout << "This is unacceptable!. . . " << std::endl;
}
void Harl::complain(std::string level)
{
    void (Harl::*functions[4])()= {&Harl::debug, &Harl::error, &Harl::info, &Harl::warning};
    std::string array[4] = {"DEBUG" , "ERROR", "INFO","WARNING"};
    for(int i = 0; i < 4; i++){
        if(level == array[i])
            (this->*functions[i])();
    }
    
}