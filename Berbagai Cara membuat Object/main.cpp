#include<iostream>


using namespace std;

class denganConstructor{
    public:
        string data;

    denganConstructor(char* data) {
        denganConstructor::data = data;
    }

    void print(){
        cout<<data<<endl;
    }

};

class tanpaConstructor{
    public:
        string data;
    
    void print(){
        cout<<data<<endl;
    }
};


int main (){
    // cara output method dengan constructor
    denganConstructor object1 = denganConstructor("otong1");
    object1.print();
    // cara output method tanpa constructor
    tanpaConstructor object2;
    object2.data="otong2";
    object2.print();
    // cara lain output method dengan constructor
    denganConstructor object3("otong3");
    object3.print();
    
    // 4 diatas menggunakan stuck memory constructor

    //5. cara output dengan heap memory constructor
    denganConstructor* object4 = new denganConstructor("otong4");
    // menggunakan new karna classnya menggunakan pointer

    // cara output ke compile ada 2 cara 
    // 1. cara deference
    // (*object4).print();
    // 2. arrow operator. mapping function atau attribute dari pointer
    object4->print();
    /*
    note : 
    arrow operator digunakan apabila function dalam classnya menggunakan pointer dan diarrowkan untuk
    mapping dari function class ke member function  class
    */

    // 6. cara output dengan heap memory constructor
    denganConstructor* object5;
    object5 = new denganConstructor("otong5");
    object5->print();


    //  cara diatas hanya bisa di heap memory constructor 
    // ketika kita coba cara diatas dengan memory stuck seperti dibawah ini :
    // denganConstructor object4;
    // object4 = denganConstructor("object4");
    // maka akan eror

    return 0;
}