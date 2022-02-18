#include <iostream>
#include <string>

using namespace std;

class Player{
    public:
        string nama;
        
        // constructor
        Player(const char* nama){
            Player::nama = nama;
            cout<<"Player "<<Player::nama<<" dibuat "<<endl;
        }
        // destructor fungsinya buat hapus isi constructor 
        ~Player(){
            cout<<"Player "<<Player::nama<<" dihapus"<<endl;
        }
};

void membuatPlayerStack(){
        Player StackedPlayer = Player("stack");
    }

void membuatPlayerheap(){
        Player* heapPlayer = new Player("Heap");
        // cara mendelete manual heapPLayer
        delete heapPlayer;
        // setiap bikin new kita delete agar system menghapus memory heap
        // saat tidak digunakan lagi 
    }
// kita buat fungsi pointer dalam memory stack 
void membuatStackplayerpointer(Player* &playerPointer){
    Player StackedPlayer = Player("stack");
    playerPointer= &StackedPlayer;
}// kita buat fungsi pointer dalam memory stack 
void membuatHeapplayerpointer(Player* &playerPointer){
    Player* heapPlayer = new Player("Heap");
    playerPointer = heapPlayer;
    
}

Player createStackPlayer(){
    Player stackPlayer = Player("stack di create");
    return stackPlayer;
}
Player* createHeapPlayer(){
    Player* HeapPlayer = new Player("Heap di create");
    return HeapPlayer;
}


int main(int argc, char const *argv[])
{
    // apabila suatu class/fungsi pd saat memory stack sudah melewati {} maka dia akan dihapus
    // fungsi untuk menambahkan dan menghapus memory stack
    membuatPlayerStack();
    // fungsi untuk menambahkan dan menghapus memory Heap
    membuatPlayerheap();

    // simulasi memory leak 

    /*
    
    tujuan di buat simulasi memory leak agar 
    kita mengambil memory Stacked player diatas dan memasukan dibawah
    yang menyebabkan system tidak bisa menghapus secara otomatis; dan
    menjadi object abadi [object lifetime] 

    cara buatnya bisa diliat di void membuatstackplayerpointer

    */


    cout<<"\n Memory Leak"<<endl;
    // stack memory 
    Player* playerpointer1;
    // player* [ditaruh di stack] sedangkan objectnya playerpointer1 [ditaroh di heap]
    membuatStackplayerpointer(playerpointer1);
    // cout<<(*playerpointer1).nama<<endl;// tidak terjadi leak karena ternyata memory sudah di hapus otomatis sama system
    // heap memory
    Player* playerpointer2;
    membuatHeapplayerpointer(playerpointer2);
    cout<<playerpointer2->nama<<endl;
    // menghapus heap Memory
    delete playerpointer2;
    // playerpointer2->nama="acak acakan";
    // cout<<playerpointer2->nama<<endl;// memory free/sudah dihapus
    
    /*
    note:

    jadi ketika kita buat memory leak di pointer memory yang terjadi 
    memory leak tidak bisa dihapus didalam scopenya dan bisa bisa
    menjadi object abadi cara menghapusnya adalah dengan menghapus
    diluar scopenya seperti cara diatas
    
    */

    // return object 
    // stack object
    cout<<"\n return object"<<endl;
    Player playerReturnStack = createStackPlayer();
    cout<<playerReturnStack.nama<<endl;
    /*
    yang jadi problematika adalah 
    saaat di cout stack di createnya ditengah 
    padahal sudah dihapus 
    */

    // heap object
    Player* playerReturnHeap = createHeapPlayer();
    cout<<playerReturnHeap->nama<<endl;
    delete playerReturnHeap;

    /*
                Hasil output
    return object
Player stack di create dibuat
stack di create
Player Heap di create dibuat
Heap di create
Player Heap di create dihapus
Player stack di create dihapus
    
    
kenapa sih stack di bawah heap dan engga dihapus 

karena: 

1. stack dihapus apabila dia melewati {} sedangkan } ada di bawah heap
2. sehingga dia akan menghapus apabila melewati }

solusi agar heap nya ga ikutan

1. di delete di luar scope 

    */
    return 0;
}
