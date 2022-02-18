#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
    public:
        string namaPublic;

    private:
        string namaPrivate;
    public:
        //constructor 
        Mahasiswa(const char* nama){
            this->namaPrivate = nama;
            this->namaPublic = nama;
            }
        void print(){
            cout<<this->namaPrivate<<endl;
            cout<<this->namaPublic<<endl;
        }
    
/*
    note : 

    Private bisa diakses apabila nama dia di deklarasikan 
    ke public keyword dan di tampilkan hanya di dalam class 
    namun apabila mau dilihat di main harus melakukan linking
    dari constructor maupun method

*/
};



int main(int argc, char const *argv[])
{
    Mahasiswa* mahasiswa1 = new Mahasiswa("john");
    // linking dari method print() pd class
    // untuk output class private
    mahasiswa1->print();

    Mahasiswa* mahasiswa2  = new Mahasiswa("angela");
    mahasiswa2->print();
    /* code */
    return 0;
}


