#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
    public: 
        string nama;
        int nim;
        double ipk;

   /* tanda :: pada mahasiswa dibuat agar tidak terjadinya double definision yang menyebabkan tertimpanya nilai awal
    sehingga bisa juga pake ini 
    Mahasiswa (string inputNama, int inputNim, double inputIpk){
        nama=inputNama;
        nim=inputNim;
        ipk=inputIpk;
    }*/
    // atau ini 
    Mahasiswa(string nama, int nim, double ipk){
        Mahasiswa::nama = nama;
        Mahasiswa::nim = nim;
        Mahasiswa::ipk = ipk;
    }
    // tipe2 method 
    // method tanpa parameter dan tanpa return (pengembalian)
    void print(){
        cout<<"Name: "<<nama<<endl;
        cout<<"Nim: "<<nim<<endl;
        cout<<"Ipk: "<<ipk<<endl;
    }
    // method dengan parameter tapi tanpa return (pengembalian)
    void ubahNama(const char * namabaru){
        // bisa pakai string untuk nama atau bisa pakai const char* biar cepet 
         Mahasiswa::nama=namabaru;
    }
    // method tanpa parameter tapi menggunakan return(pengembalian)
    string getData_nama(){
        return Mahasiswa::nama;
    }
    int getData_nim(){
        return Mahasiswa::nim;
    }
    // method dengan parameter dan return 
    // penambahan ipk
    double tambahIpk(const double &tambahIpk){
        return Mahasiswa::ipk+tambahIpk;
    }

};

int main(int argc, char const *argv[])
{
    Mahasiswa mahasiswa1=Mahasiswa("kadek",1923913,3.54);
    mahasiswa1.print();
    // ubah Nama
    cout<<"Ubah nama: "<<endl;
    mahasiswa1.ubahNama("oyong");
    cout<<mahasiswa1.nama<<endl;
    // pengambilan data
    cout<<"Pengambilan data: "<<endl;
    string dataNama=mahasiswa1.getData_nama();
    cout<<"Nama: "<<dataNama<<endl;
    cout<<"Nim: "<<mahasiswa1.getData_nim()<<endl;
    // tambah ipk
    cout<<"Tambah ipk: "<<endl;
    cout<<"Ipk sebelumnya: "<<mahasiswa1.ipk<<endl;
    cout<<"Ipk ditambah: "<<mahasiswa1.tambahIpk(1.5)<<endl;
    return 0;
}
