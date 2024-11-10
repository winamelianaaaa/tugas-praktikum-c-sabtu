#include <stdio.h>

int main() {
    int jamMasuk, jamKeluar, lamaParkir, biayaParkir;

    printf("Masukkan jam masuk (1-12): ");
    scanf("%d", &jamMasuk);
    printf("Masukkan jam keluar (1-12): ");
    scanf("%d", &jamKeluar);

    if (jamMasuk < 1 || jamMasuk > 12 || jamKeluar < 1 || jamKeluar > 12) {
        printf("Jam yang dimasukkan tidak valid. Pastikan jam antara 1 hingga 12.\n");
        return 1;
    }

    if (jamKeluar >= jamMasuk) {
        lamaParkir = jamKeluar - jamMasuk;
    } else {
        lamaParkir = (12 - jamMasuk) + jamKeluar;
    }

    if (lamaParkir <= 2) {
        biayaParkir = 2000; 
    } else {
        biayaParkir = 2000 + (lamaParkir - 2) * 500; 
    }

    printf("Lama parkir: %d jam\n", lamaParkir);
    printf("Biaya parkir: %d\n", biayaParkir);

    return 0;
}

