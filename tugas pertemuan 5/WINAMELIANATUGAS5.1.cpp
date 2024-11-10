#include <iostream>
using namespace std;

// Fungsi untuk menghitung lama bekerja
int hitungLamaBekerja(int jamMasuk, int jamPulang) {
    int lamaBekerja;
    
    // Jika jam pulang lebih besar atau sama dengan jam masuk
    if (jamPulang >= jamMasuk) {
        lamaBekerja = jamPulang - jamMasuk;
    } else {
        // Jika jam pulang lebih kecil dari jam masuk, berarti pegawai bekerja melewati tengah malam
        lamaBekerja = (12 - jamMasuk) + jamPulang;
    }
    
    return lamaBekerja;
}

int main() {
    int jamMasuk, jamPulang;
    
    // Input jam masuk dan jam pulang
    cout << "Masukkan jam masuk (1-12): ";
    cin >> jamMasuk;
    cout << "Masukkan jam pulang (1-12): ";
    cin >> jamPulang;
    
    // Validasi input
    if (jamMasuk >= 1 && jamMasuk <= 12 && jamPulang >= 1 && jamPulang <= 12) {
        int lamaBekerja = hitungLamaBekerja(jamMasuk, jamPulang);
        cout << "Lama bekerja pegawai adalah " << lamaBekerja << " jam." << endl;
    } else {
        cout << "Jam yang dimasukkan tidak valid. Pastikan jam masuk dan jam pulang antara 1 hingga 12." << endl;
    }

    return 0;
}

