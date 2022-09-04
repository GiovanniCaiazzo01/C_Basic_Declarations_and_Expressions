 #include <stdio.h>


int main(){

	int base,altezza, area, perimetro; 
	

	printf("\nCalcolo area e perimetro del triangolo \ninserisci base: ");
	scanf("%d", &base);
	printf("\nInsersci altezza: "); 
	scanf("%d", &altezza);
	
	area = base * altezza;
	perimetro = 2 * (base + altezza);
	
	printf("\nl'area del rettangolo è: %d \nIl perimetro del rettangolo è: %d \n", area, perimetro);
	return 0;
}
