#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class Mahasiswa{
    public:
        string nama;
        string NIM;
        string jurusan;

        // constructor
        Mahasiswa (string nama,string NIM,string jurusan){
            Mahasiswa::nama = nama;
            Mahasiswa::NIM = NIM;
            Mahasiswa::jurusan= jurusan;
        }
        // method untuk mengambil data dari mahasiswa
        string stringall(){
            return "\n"+nama+" "+NIM+" "+jurusan;
        }

};

class DBase{
    public:
        ifstream in;
        ofstream out;
        string fileName;

        // buat nama data
        DBase(const char* fileName){
            DBase::fileName = fileName;
        }
        // Save data

        // kelebihan oop bisa ambil data antar class contoh ini :
        void save(Mahasiswa data){
            cout<<data.nama<<endl;
            cout<<data.NIM<<endl;
            cout<<data.jurusan<<endl;

            // simpan ke data.txt
            DBase::out.open(DBase::fileName,ios::app);
                // ambil data dari mahasiswa lalu tulis di data.txt
                DBase::out<<data.stringall();
            DBase::out.close();
        }
        // tampilkan di compiler

        void showAll(){
            DBase::in.open(DBase::fileName,ios::in);
            // masukan new variabelnya untuk dideklarasikan
            string nama,NIM,jurusan;
            int index=1;

            while(!DBase::in.eof()){
                // ambil datanya sekalian deklarasikan
                DBase::in>>nama;
                DBase::in>>NIM;
                DBase::in>>jurusan;
                /*
                note : 

                kenapa harus di buat variabel baru 

                karena agar bisa didieklariskan

                dan 

                data yang dideklarasikan merupakan sesuai urutan/indexnya 
                jadi kalo

                DBase::in>>nama;
                DBase::in>>NIM;
                DBase::in>>jurusan;

                variabelnya kita ubah2 ga ngaruh karna yang diambil seusai urutan variabel ditulis sesuai

                agar mudah dibaca

                */


                // lalu keluarkan ke output
                cout<<index++<<"\t";
                cout<<nama<<"\t";
                cout<<NIM<<"\t";
                cout<<jurusan<<"\t\n";
            }
            DBase::in.close();
        }
};


int main(int argc, char const *argv[])
{   
    // tipe data untuk input
    string nama,NIM,jurusan;
    // input data
    cout<<"Input Data Mahasiswa"<<endl;
    cout<<"Nama: ";
    cin>>nama;
    cout<<"NIM: ";
    cin>>NIM;
    cin.ignore();
    cout<<"Jurusan: ";
    getline(cin,jurusan);
    // Databasenya
    Mahasiswa dataMahasiswa = Mahasiswa(nama,NIM,jurusan);
    DBase database = DBase("data.txt");

    // save data databaseke database
    cout<<"Data : "<<endl;
    database.save(dataMahasiswa);

    // tampilkan
    cout<<"Tampilkan Semua: "<<endl;
    database.showAll();
    return 0;

}
