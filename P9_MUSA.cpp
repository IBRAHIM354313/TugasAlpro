#include <iostream>
#include <string>

class Robot {
    // Bagian private hanya dapat diakses oleh member functions dalam Class Robot
private:
    std::string nama;
    int umur;
    std::string mbti;

    // Bagian public dapat diakses dari luar kelas
public:
    // Konstruktor untuk menginisialisasi  Class Robot
     Robot(std::string n, int u,std::string m) {
        nama = n;
        umur = u;
        mbti = m;

    }

    // Setter untuk mengatur nama
    void setNama(std::string n) {
        nama = n;
    }

    // Getter untuk mendapatkan nama
    std::string getNama() {
        return nama;
    }

    // Setter untuk mengatur umur
    void setUmur(int u) {
        umur = u;
    }

    // Getter untuk mendapatkan umur
    int getUmur() {
        return umur;
    }

    // Setter untuk mengatur mbti
    void setmbti(std::string m) {
        mbti = m;
    }

    // Getter untuk mendapatkan mbti
    std::string getmbti() {
        return mbti;
    }

    // Metode untuk menampilkan informasi Class Robot
    void tampilkanInfo() {
        std::cout << "Nama: " << nama <<", Umur: " << umur << "Mbti:"<< mbti <<std::endl;
    }
};

int main() {
    // Membuat objek Class Robot
     Robot R1("Agung", 43,"MJKL");

    // Menggunakan metode public untuk mengakses data private

    R1.tampilkanInfo();
   
    return 0;
}