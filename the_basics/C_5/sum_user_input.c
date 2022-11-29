#include <stdio.h>

int a, b, somma;

int main(){
	printf("\n Inserisci il primo numero da sommare: ");
	scanf("%d", &a);
	printf("\n inserisci il secondo numero da sommare: ");
	scanf("%d", &b);
	
	somma = a + b;
	printf("\n la somma dei numeri %d + %d =  %d \n", a,b,somma);


return 0;
}
