#include <stdio.h>

int main() {
    float celsius, fahrenheit, reamur;

    // Input suhu dalam Celcius
    printf("Masukkan suhu dalam Celcius: ");
    scanf("%f", &celsius);

    // Menghitung konversi suhu
    fahrenheit = (celsius * 9 / 5) + 32;
    reamur = celsius * 4 / 5;

    // Menampilkan hasil
    printf("Suhu dalam Fahrenheit: %.2f °F\n", fahrenheit);
    printf("Suhu dalam Reamur: %.2f °R\n", reamur);

    return 0;
}

