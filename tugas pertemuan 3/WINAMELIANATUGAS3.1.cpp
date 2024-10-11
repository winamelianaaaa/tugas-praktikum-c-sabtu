#include <stdio.h>

int main() {
    float celsius, fahrenheit, reamur;

    printf("Masukkan suhu dalam Celcius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;
    reamur = celsius * 4 / 5;

    printf("Suhu dalam Fahrenheit: %.2f °F\n", fahrenheit);
    printf("Suhu dalam Reamur: %.2f °R\n", reamur);

    return 0;
}

