#include <stdio.h>
#include <math.h>

int main ()
{
	float alas = 4.0, tinggi = 5.0, miring;
	
	miring = sqrt((alas * alas) + (tinggi * tinggi));
	
	printf("panjang sisi miring segitiga adalah: %.2f cm\n", miring);
	
	return 0;
}
