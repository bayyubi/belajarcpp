#include <iostream> //?include merupakan preprocessor directive/source code yang digunakan untuk menyertakan pustaka atau header file ke dalam program.
                    //?iostream merupakan pustaka standar C++ yang digunakan untuk input & ourput.

int main() { //?fungsi main() merupakan funsi utama, kata kunci int menunjukan bahwa fungsi ini mengembalikan nilai berupa bilangan bulat (integer).
    std::cout << "Halo!" << std::endl; //?std::cout digunakan untuk menampilkan teks.
    std::cout << "Belajar C++" << std::endl; //?std:endl digunakan untuk membuat satu baris baru.
    std::cout << "Semangat" << std::endl;

    return 0; //?mengembalikan nilai 0 menandakan bahwa program telah selesai dijalankan dengan sukses.
}