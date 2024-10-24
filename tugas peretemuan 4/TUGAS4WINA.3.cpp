#include <stdio.h>

int main() {
    int N;
    printf("Input N: ");
    scanf("%d", &N);

    if (N > 50) {
        N = N - 25;
    } else {
        N = N + 10;
    }

    printf("Final value of N: %d\n", N);
    return 0;
}
