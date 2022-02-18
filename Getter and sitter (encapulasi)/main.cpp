#include <iostream>
#include <string>

using namespace std;

class Player{
    private:
        string name;
        double attackPower;
        int level;
        int exp;

    public:

    Player (const char* name){
        /*
        kenapa cuma name 

        karna yang dideklasrasikan cuma yang nama
        Player("nama"); bukan Player ("name", 231301, 12312);
        
        */
        this->name= name;
        this->level = 1;
        this->exp = 0;
        this->attackPower=100;
    }

    // getter, ini artinya kita akan membuat attribute/salah data pada class menjadi read only
    string getName(){
        return this->name;
    }
    // setter, untuk write data ke class 
   void addEXP(int expValue){
       int maxEXP = 100;
        this->exp+=expValue;
        cout<<"Exp Anda: "<<this->exp<<endl;
        if(this->exp>=maxEXP){
            // maka dia level up
            this->level++;
            this->attackPower +=100;
            cout<<"LEVEL UP!!!!"<<endl;
            // balik lagi ke 0 exp nya
            this->exp = 0;
         }
   }

    void display(){
        cout<<"Name:\t"<<this->name<<endl;
        cout<<"Level:\t"<<this->level<<endl;
        cout<<"Exp:\t"<<this->exp<<endl;
        cout<<"Attack Power:\t"<<this->attackPower<<endl;
    }
};




int main(int argc, char const *argv[])
{
    //memory stack
    Player player1 = Player("sasuke");
    player1.display();

    // implementasi dari getter
    cout<<"implementasi dari getter\n";
    cout<<player1.getName()<<endl;
    // coba kita rubah
    // player.name="hinata";//akan eror karna dia private tipe datanya
    cout<<"\n";

    // tambah exp dengan kegiatan bertarung
    cout<<"Bertarung!!!"<<endl;
    player1.addEXP(25);
    player1.display();
    cout<<"\n";
    player1.addEXP(55);
    player1.display();
    cout<<"\n";
    player1.addEXP(10);
    player1.display();
    cout<<"\n";
    player1.addEXP(25);
    player1.display();
    cout<<"\n";
    // hasilnya
    cout<<"\n";
    player1.display();

    /*
    kenapa dia addexpnya ga langsung besar ? 
    misalnya tadi kan di constructor ditulis 100
    kenapa dia jadi balik 25 lagi ?


    karena di private jadi kita harus nambahin ulang agar bisa
    besar
    
    */

    
    /* code */
    return 0;
}
