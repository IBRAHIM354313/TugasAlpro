#include<iostream>
#include<string>

// Deklarasi class 
class Makanan {
 public:
     std::string nama;
     int harga;
     std::string rasa;
// Metode untuk menampilkan informasi Class Makanan
    void tampilkan_info() {
     std::cout << "Nama: " << nama << std::endl;
    std::cout << "Harga: " << harga << std::endl;
        std::cout << "Rasa:" << rasa << std::endl;
    }

};

int main() {
    // Membuat objek dari class Makanan
       Makanan M1;
     // Memberi nilai atribut objek
    M1.nama = "DONAT";
    M1.harga = 2000;
    M1.rasa = "MANIS";

     // Memanggil metode untuk menampilkan informasi
    M1.tampilkan_info();

    return 0;
}
    



