#include <stdio.h>

#define PERCENTUALE_TASSA 5
int main(){
    float importo = 0, calcolo = 0; 

    printf("\n Inserisci un importo monetario: ");
    scanf("%f", &importo);
    
    calcolo = (PERCENTUALE_TASSA * importo) / 100;
    importo += calcolo;

    printf("\ncon l'aggiunta di tasse l'importo è pari a: %f\n", importo);
    return 0;
}