#include <iostream>
#include <string>
using namespace std;

// Kelas dasar Karyawan
class Karyawan {
protected:
    string nama = "Farhan";

public:
    void bekerja() {
        cout << "Sedang bekerja \n";
    }

    string getNama() {
        return nama;
    }
};

// Kelas turunan Programmer yang mewarisi dari Karyawan
class Programmer : public Karyawan {
public:
    string bahasaPemrograman = "C++";

    void tampilkanInfo() {
        cout << getNama() << " menggunakan bahasa pemrograman " << bahasaPemrograman << endl;
    }
};

int main() {
    Programmer programmer;
    Karyawan karyawan;
    cout<< "Nama diambil melalui obj karyawan "<< karyawan.getNama()<< endl;
    cout<< "Nama diambil melalui obj programmer "<< programmer.getNama()<< endl;
    programmer.tampilkanInfo();
    
    return 0;
}