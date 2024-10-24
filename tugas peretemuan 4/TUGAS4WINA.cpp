#include <stdio.h>

int main () {
	int angka;
	
	printf("Masukan bilangan bulat positif: ");
	scanf("%d", &angka);
	
	if (angka % 2 == 0) {
		printf("GENAP\n");
	} else {
		printf("GANJIL\n");
	}
	
	return 0;
}
