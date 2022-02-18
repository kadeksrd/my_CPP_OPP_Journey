#include "Player.hpp"
#include <iostream>
#include <string>

Player::Player(const char* name, double health){
    this->name = name;
    this->health = health;
}

void Player::display(){
    std::cout<<"Player ini adalah "<<this->name<<std::endl;
    std::cout<<"Health: "<<this->health<<std::endl;
    std::cout<<"Player ini menggunakan senjata: "<<this->weapon->getName()<<std::endl;
    std::cout<<"Dengan Damage: "<<this->weapon->getDamage()<<std::endl;
}

void Player::equipWeapon(Weapon* weapon){
    this->weapon = weapon;
}
double Player::getDamage(){
    return this->weapon->getDamage();
}
double Player::getHealth(){
    return this->health;
}
void Player::displayHealth(){
    std::cout<<this->health<<std::endl;
}