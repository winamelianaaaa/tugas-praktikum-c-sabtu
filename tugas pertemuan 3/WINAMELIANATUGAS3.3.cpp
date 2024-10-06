#include <stdio.h>

int main() {
    int angka;

    printf("Masukkan bilangan bulat positif: ");
    scanf("%d", &angka);

    if (angka < 0) {
        printf("Harap masukkan bilangan bulat positif.\n");
        return 1;
    }

    if (angka % 2 == 0) {
        printf("%d adalah GENAP.\n", angka);
    } else {
        printf("%d adalah GANJIL.\n", angka);
    }

    return 0;
}

