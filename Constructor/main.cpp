#include <iostream>
#include <string>
using namespace std;

// constructor 
    // membuat fungsi pada data dalam class yang berfungsi agar tidak menumpuknya inherit data di dalam main
    
    /*
    Cara Penulisan constructor fungsinya :
    ditulis di dalam class
    class nama_class{
            tipe class:
            tipe_data data_class1;
            tipe_data data_class2;



        nama_class(tipedata_1, tipe_databaru1, tipedata_2 tipe_databaru2 dst){
            namaclass::data_class1=tipe_databaru1
            namaclass::data_class2=tipe_databaru2
            dst

            cara buat output dalam constructor 

            cout<<nama_class::data_class1<endl;
            cout<<nama_class::data_class2<endl;
            cout<<nama_class::data_class3<endl;

        }       
    };
    Cara penulisan constructor inputnya :
    ditulis di dalam main (jendela utama)
    int main (){
    nama_class var_class = nama_class(input data1, input data2, dst sesuai tipe data);
    }
    
    */


class Mobil{
    public :
        string merk;
        string model;
        int tahun;
    // the constructor 
    Mobil(string inputMerk, string inputModel, int inputTahun){
        Mobil::merk=inputMerk;
        Mobil::model=inputModel;
        Mobil::tahun=inputTahun;

        cout<<"Merk Mobil: "<<Mobil::merk<<endl;
        cout<<"Model Mobil: "<<Mobil::model<<endl;
        cout<<"Tahun Mobil: "<<Mobil::tahun<<endl;
        cout<<endl;
    }

};

int main(int argc, char const *argv[])
{
    Mobil mobil1 = Mobil("Suzuki", "ertiga", 2012);
    Mobil mobil2 = Mobil("Daihatsu","Xenia",2003);
    return 0;
}
