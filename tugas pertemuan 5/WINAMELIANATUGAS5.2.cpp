#include <stdio.h>

int main() {
    char jenis;      
    float harga, harga_diskon; 
    float diskon;     

    printf("Masukkan jenis produk (A/B/C): ");
    scanf(" %c", &jenis);  
    printf("Masukkan harga produk: ");
    scanf("%f", &harga);

    switch (jenis) {
        case 'A':
        case 'a':
            diskon = 0.10; 
            break;
        case 'B':
        case 'b':
            diskon = 0.15; 
            break;
        case 'C':
        case 'c':
            diskon = 0.20; 
            break;
        default:
            printf("Jenis produk tidak valid.\n");
            return 1;  
    }

    harga_diskon = harga - (harga * diskon);

    printf("Harga awal: %.2f\n", harga);
    printf("Diskon: %.2f%%\n", diskon * 100);
    printf("Harga setelah diskon: %.2f\n", harga_diskon);

    return 0;
}

