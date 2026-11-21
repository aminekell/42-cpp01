#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
    private:
        std::string type;
    public:
    Weapon(std::string init_type);
    //getter
        const std::string &getType();
    //setter
        void setType(std::string new_type);
};

#endif