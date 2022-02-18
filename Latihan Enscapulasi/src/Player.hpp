#ifndef __PLAYER
#define __PLAYER
#include <string>

// ambil data weapon untuk setter
#include "weapon.hpp"
class Player{
   
    public:
        std::string name;
         // player hpp yang ingin setter weapon hpp
        Weapon* weapon;
        // health
        double health;
        Player(const char* name, double health);
        void display();
        // setter (player hanya bisa me equip tapi tidak bisa ambil item )
        void equipWeapon(Weapon*);
        double getDamage();
        double getHealth();
        void displayHealth();
        
};


#endif

