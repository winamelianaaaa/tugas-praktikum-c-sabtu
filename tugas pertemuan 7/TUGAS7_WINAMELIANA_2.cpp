#include <stdio.h>

int main() {
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};
    int A[11] = {0}; 
    int i, j = 0;

    for (i = 0; i < 11; i++) {
        if (data[i] % 2 == 0) { 
            A[j] = data[i];
            j++;
        }
    }

    printf("Isi array A dengan bilangan genap:\n");
    for (i = 0; i < j; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}

