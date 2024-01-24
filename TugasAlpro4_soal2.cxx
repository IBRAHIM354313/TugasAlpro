#include <iostream>

int main() {
    // Array awal
    int nilai[] = {85, 70, 75};

    // Menampilkan array sebelum perubahan
    std::cout << "Array sebelum perubahan: {";
    for (int i = 0; i < 3; ++i) {
        std::cout << nilai[i];
        if (i < 2) {
            std::cout << ", ";
        }
    }
    std::cout << "}\n";

    // Mengubah nilai elemen pada index ke-0 menjadi 20
    nilai[0] = 20;

    // Menampilkan array setelah perubahan
    std::cout << "Array setelah perubahan: {";
    for (int i = 0; i < 3; ++i) {
        std::cout << nilai[i];
        if (i < 2) {
            std::cout << ", ";
        }
    }
    std::cout << "}\n";

    return 0;
}