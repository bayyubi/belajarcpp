#include <iostream>
#define DEBUG //? Mengaktifkan mode debug

using namespace std;

int main() {
    #ifdef DEBUG //? Memeriksa apakah DEBUG telah didefinisikan sebelumnya menggunakan #define
        cout <<"Mode Debug Aktif!"<< endl;
    #endif

    cout <<"Program Berjalan..."<< endl;

    cin.get();
    return 0;
}