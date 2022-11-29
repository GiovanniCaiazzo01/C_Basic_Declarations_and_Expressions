#include <stdio.h>


int main(){

    int input;
    printf("perfavore inserisci il tuo dato: ");
    scanf("%d", &input);

    if(input<=9){
        printf("\n Il numero %d ha solo una cifra \n", input);
    }else if(input <=99){
        printf("\n Il numero %d ha solo due cifre \n", input);
    }else if(input <= 999 ){
        printf("\n Il numero %d ha solo 3 cifre \n", input);
    }
    else{
        printf("\n Il numero %d ha + di 4 cifre \n", input);
    }

    return 0; 
}