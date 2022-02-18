#include<iostream>
#include"player.h"
#include<string>


Player::Player(const char* name){
        this->name = name;
    }
    // method fungsi asli pada class pada saat prototipe
void Player::print(){
        std::cout<<"Nama Player "<<this->name<<std::endl;
        std::cout<<"class ini berada di file orang yang terpisah!"<<std::endl;
    }
    // method aslinya pada getName;
std::string Player::getName(){
        return this->name;
}
    // method setName
void Player::setName(const char* name){
    this->name = name;
}

/*
Note: 

setiap update harus di buat compiler baru karena 
filenya ada 3 file

untuk compile nya harus pake terminal atau 
cmd

caranya kita cd dulu ke directory source kita
lalu di buat file exenya atau compilernya di
cara buatnya :

g++ namasrc1.cpp namasrc2.cpp -o main.exe

dan dibuat lagi saat ada pengupdatetan

dibuatnya bisa:

1.dengan nama_file yang sama
2. dengan nama file baru 

lalu di compile manual

cara compilenya :

&.\main.exe


*/