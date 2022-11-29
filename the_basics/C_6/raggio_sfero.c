#include <stdio.h>

#define PI 3.14159265f

float raggio, massa, calcolo;

int main(){
	printf("\ncalcolo del volume di una sfera!\nInserisci raggio in metri: ");
	scanf("%f", &raggio); 
	
	calcolo = ((4*PI*raggio*raggio*raggio)/3);
	
	printf("\nil volume della sfera è: %f\n", calcolo); 
	
	return 0;	
}
