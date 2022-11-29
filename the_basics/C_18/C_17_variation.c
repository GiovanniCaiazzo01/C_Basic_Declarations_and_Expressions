#include <stdio.h>


// this program it's a variation of C_17 
int main(void){
    int arr [5];
    int numero = 0, positivo= 0, negativo= 0;

    for(int i = 0; i < 5; i++){
        printf("inserisci un numero: ");
        scanf("%d", &numero);
        numero >= 0 ? positivo++ : negativo++;
    }
    positivo > negativo ? 
    printf("\n ci sono più mumeri positivi %d che negativi %d\n", positivo, negativo):
     printf("ci sono più mumeri negativi %d che positivi %d\n", negativo, positivo); 


    return 0;
}