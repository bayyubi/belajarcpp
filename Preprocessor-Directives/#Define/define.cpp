#include <iostream>
#define PI 3.14159 //? Mendefinisikan

using namespace std;

int main(){
    //! Lingkaran
    float jari = 5; //? float adalah tipe data untuk menyimpan angka desimal atau pecahan 
    float luas = PI * jari * jari;

    std::cout <<"Lingkaran"<< std::endl; 
    std::cout <<"Luas Lingkaran adalah: " <<luas<< std::endl;
    
    //! Persegi Panjang
    float panjang = 5;
    float lebar = 10;
    float keliling = 2 * panjang * lebar;

    std::cout <<"Persegi Panjang"<< std::endl;
    std::cout <<"Keliling Persegi Panjang adalah: " <<keliling<< std::endl;

    //! Tabung

    float tinggi = 12;
    float selimut = 2 * PI * jari * tinggi;

    std::cout <<"Tabung"<< std::endl;
    std::cout <<"Luas Selimut Tabung adalah: " <<selimut<< std::endl;

    //! Bola
    float volume = 4/3 * PI * jari * jari;

    std::cout <<"Bola"<< std::endl;
    std::cout <<"Volume Bola adalah: " <<volume<< std::endl;

    cin.get();
    return 0;

}