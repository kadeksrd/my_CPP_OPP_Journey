#ifndef __WEAPON
#define __WEAPON
#include <string>


class Weapon{
    private:
        std::string name;
        double attackPower;
    public:
        Weapon(const char* name, double attackPower);
        void display();
        // getter, read only 
        std::string getName();
        double getDamage();

};




#endif