#include <iostream>
#include <string>
#include <chrono>


using namespace std;
using Clock = std::chrono::high_resolution_clock;
using TimePoint = std::chrono::time_point<Clock>;

class kosong{
    public:
    void nilai(int a){
        cout<<a<<endl;
    }
};

class isi{
    public:
    int dataInt; //4byte
    double  dataDouble;//8byte
    string dataString;// 32byte
    char dataChar;//1 byte

    void print(){
        cout<<"Jumlah Data Isi: "<<endl;
        cout<<sizeof(dataInt)<<" Byte"<<endl;
        cout<<sizeof(dataDouble)<<" Byte"<<endl;
        cout<<sizeof(dataString)<<" Byte"<<endl;
        cout<<sizeof(dataChar)<<" Byte"<<endl;
        cout<<"Total: "<<sizeof(isi)<<" Byte"<<endl;
    }
   
   void addressMemory(){
        cout<<"Isi Address pada class"<<endl;
        cout<<&dataInt<<endl;
        cout<<&dataDouble<<endl;
        cout<<&dataString<<endl;
        cout<<&dataChar<<endl;   
        }
   
    /*
    Penjelasan :
    Bahwa pada class memory yang banyak digunakan hanya pada kumpulan data/tipe data sisanya
    mau fungsi dan class itu sendiri dihitung 1 Byte;
    */


    /*
    Note Untuk ukuran tipe data : 
    1. Double di windows dibaca 12 Byte saat dicompile
    2. string di windows dibaca 32 Byte bukan 24 Byte
    3. Char  di windows dibaca 8 Byte saat dicompile
    */

};

class Mahasiswa{
    public:
    string nama;
    int NIM;
    string jurusan;

    Mahasiswa(const char* nama, int NIM, string jurusan){
        Mahasiswa::nama=nama;
        Mahasiswa::NIM=NIM;
        Mahasiswa::jurusan=jurusan;
     }

    void print(){
        cout<<&nama<<endl;
        cout<<&NIM<<endl;
    }
};



int main(int argc, char const *argv[])
{
    // jumlah data pada class kosong 
    cout<<"Jumlah data kosong: "<<endl;
    cout<<sizeof(kosong)<<"Byte"<<endl;
    // jumlah data pada class isi
    isi output;
    output.print();
    // addres pada class isi
    output.addressMemory();
    
    /*
    memory ditulis dalam memory stack salah satu cirinya terbaca urutan :
    0x61...
    0x61...
    0x61...

    nah jadi apa sih itu memory stack ?

    memory stack itu memory yang dibuat dalam 1 urutan salah satu modelnya 
    seperti gedung :
    []
    []
    []
    []

    Bagaimana Cara melihat Memory stack itu ?
    */
    

    // address pada Memory stack
    Mahasiswa data1 = Mahasiswa("Ucup",1203213,"Kedokteran Perzombloan");
    // output
    cout<<"Address pada mahasiswa1: "<<endl;
    data1.print();



    /*
    apa itu ? memory heap se

    jadi memory heap kumpulan memory2 dalam wadah yang lebih 
    besar dan lebih kompleks dari memory stack 

    salah satu bentuknya seperti wadah atau kotak
    [         ]
    [         ]
    [         ]

    pertanyaaanya bagaimana cara buat menjadi memory heap

    */
   
    // adddress pada memory heap
    cout<<"Address pada mahasiswa2: "<<endl;
    Mahasiswa* data2= new Mahasiswa("otong",12321012,"Teknik perzombloan");
    data2->print();

    cout<<"Address pada mahasiswa3: "<<endl;
    Mahasiswa* data3 = new Mahasiswa("oyong", 1231123,"teknik perikanan");
    data3->print();

    /*
    lah kok sama berurutan?

    yang dimaksud berurutan itu memory nya bukan datanya 

    kalo tadika data1 memorynya ox61 dan pada class lainnya memorynya 0x61

    berbeda dengan data2 memorynya udh berbeda 

    dia jadi 0x1.. berbeda dengan memory class lainnya

    bisa disimpulkan data2 sudah pindah ke heap memory 
    
    ga percaya?


    kita coba lagi pada data 3 

    dan pada data3 dia menuliskan memory menjadi oxde5 beda banget 
    
    sama data 2 dan data 1


    note : 

    apabila sih classnya kita tampilkan yang dibaca malah memory stack d
    kenapa ?

    kerena sih class itu hanya pointernya berbeda objectnya yang di buatkan memory baru pada saat di tulis new nama_class

    begitu 



    gimana sih kecepatan memory stack dan memory heap 

    mari kita buktikan 

    */
    // kita buat timer 
    // seberapa cepat kita membuat project dengan memory stack dan memory heap 
    // jgn lupa masukan library #include <chrono>
    TimePoint *tStackStart = new TimePoint();
    TimePoint *tStackEnd = new TimePoint();
    TimePoint *tHeapStart = new TimePoint();
    TimePoint *tHeapEnd = new TimePoint();

    cin.get();
    *tStackStart = Clock::now();
    Mahasiswa data4 = Mahasiswa("wadidwas",345534534,"Teknik percaya");
    *tStackEnd = Clock::now();
    
    cin.get();
    *tHeapStart = Clock::now();
    Mahasiswa* data5 = new Mahasiswa("udin",1414112312,"kedokteran perzombloan");
    *tHeapEnd = Clock::now();

    chrono::duration<double> durasi = *tStackEnd - *tStackStart;
    cout << "Waktu pembuatan object di stack adalah : " << durasi.count() << endl;
    durasi = *tHeapEnd - *tHeapStart;
    cout << "Waktu pembuatan object di heap adalah : " << durasi.count() << endl;


    return 0;
};
