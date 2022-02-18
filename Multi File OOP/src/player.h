// biar save agar di include ulang
#ifndef __PLAYER
#define __PLAYER

#include<iostream>
#include <string>

// deklarasi class
class Player{
    public:
        std::string name;
    // constructor
    Player(const char*);
    void print();
    std::string getName();
    void setName(const char*);
};
#endif;