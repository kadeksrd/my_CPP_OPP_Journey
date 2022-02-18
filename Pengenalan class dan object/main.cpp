#include <iostream>
#include <string>
using namespace std;

class Bus {
    /*
    type class :
    public : bisa di akses di mana aja 
    private : hanya bisa diakses disini 
    protected : bisa diakses class yang meng inherete/ terintergrasi dari class ini 
    
    */
    public:
        string merk;
        string type;
        int tahun;
};

int main (){
    Bus bus1, bus2;

    // Data bus pertama
    bus1.merk="Mercedes-Benz";
    bus1.type="OH 1830";
    bus1.tahun=2018;

    //Data bus kedua 
    bus2.merk="Hino";
    bus2.type="R260 (RK8)";
    bus2.tahun=2012; 


    // output data pertama
    cout<<"Model bus Pertama"<<endl;
    cout<<"Merk bus: "<<bus1.merk<<endl;
    cout<<"Type bus: "<<bus1.type<<endl;
    cout<<"Tahun bus: "<<bus1.tahun<<endl;
    cout<<endl;
    // ouput data kedua 
    cout<<"Model bus Kedua"<<endl;
    cout<<"Merk bus: "<<bus2.merk<<endl;
    cout<<"Type bus: "<<bus2.type<<endl;
    cout<<"Tahun bus: "<<bus2.tahun<<endl;



}