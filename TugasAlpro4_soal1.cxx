#include <iostream>
#include <vector>

// Fungsi untuk menambahkan dua matriks
std::vector<std::vector<int>> tambahMatriks(const std::vector<std::vector<int>>& matriks1, const std::vector<std::vector<int>>& matriks2) {
    std::vector<std::vector<int>> hasilTambah;
    for (size_t i = 0; i < matriks1.size(); ++i) {
        std::vector<int> baris;
        for (size_t j = 0; j < matriks1[0].size(); ++j) {
            baris.push_back(matriks1[i][j] + matriks2[i][j]);
        }
        hasilTambah.push_back(baris);
    }
    return hasilTambah;
}

// Fungsi untuk mengalikan dua matriks
std::vector<std::vector<int>> perkalianMatriks(const std::vector<std::vector<int>>& matriks1, const std::vector<std::vector<int>>& matriks2) {
    if (matriks1[0].size() != matriks2.size()) {
        std::cout << "Perkalian matriks tidak valid." << std::endl;
        return {};
    }

    std::vector<std::vector<int>> hasilKali(matriks1.size(), std::vector<int>(matriks2[0].size(), 0));

    for (size_t i = 0; i < matriks1.size(); ++i) {
        for (size_t j = 0; j < matriks2[0].size(); ++j) {
            for (size_t k = 0; k < matriks2.size(); ++k) {
                hasilKali[i][j] += matriks1[i][k] * matriks2[k][j];
            }
        }
    }

    return hasilKali;
}

int main() {
    // Contoh matriks untuk dijumlahkan dan dikalikan
    std::vector<std::vector<int>> matriksA = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    std::vector<std::vector<int>> matriksB = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    // Penjumlahan matriks
    std::vector<std::vector<int>> hasilJumlah = tambahMatriks(matriksA, matriksB);
    std::cout << "Hasil Penjumlahan Matriks:" << std::endl;
    for (const auto& baris : hasilJumlah) {
        for (int elemen : baris) {
            std::cout << elemen << ' ';
        }
        std::cout << std::endl;
    }

    // Perkalian matriks
    std::vector<std::vector<int>> hasilKali = perkalianMatriks(matriksA, matriksB);
    std::cout << "\nHasil Perkalian Matriks:" << std::endl;
    for (const auto& baris : hasilKali) {
        for (int elemen : baris) {
            std::cout << elemen << ' ';
        }
        std::cout << std::endl;
    }

    return 0;
}