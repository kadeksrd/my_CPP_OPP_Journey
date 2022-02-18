#include <iostream>
#include <string>
#include "Player.hpp"
#include "Weapon.hpp"

using namespace std;


int main(int argc, char const *argv[])
{
    Player* player1 = new Player("otong",100);
    Player* player2 = new Player("ucup",100);
    Weapon* weapon1 = new Weapon ("sniper",50);
    Weapon* weapon2 = new Weapon ("Shotgun",30);

    // implementasi setter untuk mengequip weapon
    player1->equipWeapon(weapon1);
    player2->equipWeapon(weapon2);
    player1->display();
    cout<<"\n";
    player2->display();

    /*
    pr buat player saling serang dan ada healthnya
    */
    cout<<"mereka saling attack\n"<<endl;
    double serang1, serang2;
    serang1=player2->health;
    serang2=player1->health;
    cout<<player1->name<<" serang "<<player2->name<<endl;
    serang1=(player2->health)-(player1->getDamage());
    serang1=serang1-serang1;
    cout<<"darah "<<player2->name<<" tersisa: "<<serang1<<endl;
    cout<<"\n";
    cout<<player2->name<<" serang "<<player1->name<<endl;
    serang2=(player1->health)-(player2->getDamage());
    serang2=serang2-serang2;
    cout<<"darah "<<player1->name<<" tersisa:  "<<serang2<<endl;
    return 0;
}
