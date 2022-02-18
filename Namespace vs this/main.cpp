#include <iostream>
#include <string>

using namespace std;


// data member
class dataMember {
    public: 

    string dataStr;
    double dataDouble;
    double m_dataDouble;

    dataMember(const char* dataStr, double dataDouble){
    // dengan menggunakan namespace dari class
    dataMember::dataStr = dataStr;
    
    // dengan menggunakan this 
    // this merupakan class dalam bentuk pointer ga percaya ? kita buktikan
    cout<<"ini loh this: "<<this<<endl;
    // kita buat constructornya 
    this->dataDouble = dataDouble;

    // menggunakan konversi penamaan (data membernya langsung)
    m_dataDouble=dataDouble;
    
    }


};
    // classs fungsi 
class Player{
    public:
        string name;
        double power;
        int health;

    Player(const char* name, double power){
        // namespace
        Player::name=name;
        // this
        this->power=power;
    }

    void setName(const char* name){
        this->name=name;
    }

    void setPower(double power){
        this->power=power;
    }

    // buat prototipe
    void setHealt (int);

};

// fungsi namespace pd class bisa juga buat prototipe
/*
    note :
    jadi :: pada class itu merupakan namespace dan namespace sendiri
    bisa masuk ke namespace lain jadi :: tuh akan selalu digunakan
    untuk prototipe atau mengelink namespace diluar scopenya


*/
void Player::setHealt(int health){
    this->health=health;
}

int main(int argc, char const *argv[])
{
    // buat output dengan memory heap 
    dataMember* object1 = new dataMember("ucup",0.05);
    cout<<object1->dataStr<<endl;
    cout<<object1->dataDouble<<endl;
    cout<<object1->m_dataDouble<<endl;

    // Player
    Player* player1 = new Player("otong",100);
    // output nama
    cout<<player1->name<<endl;
    // powernya
    cout<<player1->power<<endl;
    // healthnya
    player1->health=100;
    cout<<player1->health<<endl;
    /* code */
    return 0;
}

