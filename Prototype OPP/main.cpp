#include <iostream>
#include <string>

using namespace std;

class Player{
    public:
        string name;

    // constructor Prototipenya
    Player(const char*);
    // method Prototipenya
    void print();
    // method return Prototipenya
    string getName();
    //prototipe method ganti nama;
    void setName(const char*);

    /*
    pada method dan constructor di claass
    saat buat prototipe

    cukup :

    method/nama_constructor nama_method[kalo constructor ga perlu make](tipe datanya)
    
    
    */
};

int main(int argc, char const *argv[])
{
    Player* playerObject = new Player("Mario"); 
    playerObject->print();
    // ambil data dari class
    cout<<playerObject->getName()<<endl;
    // mengganti nama
    cout<<"rubah nama: "<<endl;
    playerObject->setName("ucup");
    // untuk outputnya penggunaan method pada heap memory hanya bisa pake method output
    playerObject->print();
    return 0;
}

    
    // Constructor Aslinya pada saat di prototipe
Player::Player(const char* name){
        this->name = name;
    }
    // method fungsi asli pada class pada saat prototipe
void Player::print(){
        cout<<"Nama Player "<<this->name<<endl;
    }
    // method aslinya pada getName;
string Player::getName(){
        return this->name;
}
    // method setName
void Player::setName(const char* name){
    this->name = name;
}
