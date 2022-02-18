#include <iostream>
#include <string>

// external definiton
#include "player.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Player* playerObject = new Player("naruto"); 
    // output constructor
    playerObject->print();
    // output getName
    cout<<playerObject->getName()<<endl;
    // output rubah Nama
    cout<<"rubah nama dia: "<<endl;
    playerObject->setName("sasuke");
    playerObject->print();
    return 0;
}