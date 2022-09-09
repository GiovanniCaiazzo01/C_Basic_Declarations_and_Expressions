#include <stdio.h>

int main()
{

	float calcolo = 0, valore = 0;

	printf("Perfavore inserisci il valore della commisione: ");
	scanf("%f", &valore);

	if (valore < 2500.00f && valore){
		calcolo = 30.00f + .017f * valore;
	}

	else if (valore < 6250.00f){
		calcolo = 56.00f + .0066f * valore;
	}

	else if (valore < 20000.00f){
		calcolo = 76.00f + .0034f * valore;
	}

	else if (valore < 50000.00f){
		calcolo = 100.00f + .0022f * valore;
	}

	else if (valore < 500000.00f){
		calcolo = 155.00f + .0011f * valore;
	}

	else {
		calcolo = 255.00f + .009f * valore;
	}

	printf("La tua commissione è di: %.2f\n", calcolo);

	return 0;
}
