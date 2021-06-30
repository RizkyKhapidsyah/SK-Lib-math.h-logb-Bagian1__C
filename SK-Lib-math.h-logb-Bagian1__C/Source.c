#include <stdio.h>      /* printf */
#include <math.h>       /* logb */
#include <conio.h>

int main() {
	double x, hasil;
	x = 47836.0;
	hasil = logb(x);
	printf("logb (%f) = %f.\n", x, hasil);
	_getch();
	return 0;
}