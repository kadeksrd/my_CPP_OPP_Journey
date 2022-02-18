#include "Weapon.hpp"
#include <iostream>
#include <string>

Weapon::Weapon(const char* name, double attackPower){
    this->name = name;
    this->attackPower = attackPower;
}

void Weapon::display(){
    std::cout<<"Nama senjata: "<<this->name<<std::endl;
    std::cout<<"kekuatan: "<<this->attackPower<<std::endl;
}

std::string Weapon::getName(){
    return this->name;
}

double Weapon::getDamage(){
    return this->attackPower;
}