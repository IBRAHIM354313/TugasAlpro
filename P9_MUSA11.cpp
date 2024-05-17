#include<iostream>
#include<string>

class Makanan {
    // Bagian private hanya dapat diakses oleh member functions dalam Class Makanan
private:
    std::string nama;
    int harga;
    std::string rasa;

    // Bagian public dapat diakses dari luar Class Makanan
public:
    // Konstruktor untuk menginisialisasi  Class Makanan
     Makanan(std::string n, int h,std::string r) {
        nama = n;
        harga = h;
        rasa = r;
  
    }

    // Setter untuk mengatur nama
    void setNama(std::string n) {
        nama = n;
    }

    // Getter untuk mendapatkan nama
    std::string getNama() {
        return nama;
    }

    // Setter untuk mengatur harga
    void setHarga(int h) {
    }

    // Getter untuk mendapatkan harga
    int getHarga() {
        return harga;
    }

    // Setter untuk mengatur rasa
    void  setRasa(std::string r) {
    }

    // Getter untuk mendapatkan rasa
    std::string getRasa() {
        return rasa;
    }

    // Metode untuk menampilkan informasi Class Makanan
    void tampilkanInfo() {
        std::cout << "Nama: " << nama <<", Harga: " << harga << "Rasa:"<< rasa <<std::endl;
    }
};

int main() {
    // Membuat objek Class Makanan
     Makanan M1("DONAT",2000,"MANIS");

    // Menggunakan metode public untuk mengakses data private

    M1.tampilkanInfo();
   
    return 0;
}
    


    