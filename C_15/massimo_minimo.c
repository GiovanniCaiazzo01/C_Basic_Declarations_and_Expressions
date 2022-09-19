#include <stdio.h>


int main(){

    int primo=0, secondo=0, terzo=0, quarto=0;
    printf("Perfavore inserisci 4 numeri: ");
    scanf("%d", &primo);
    scanf("%d", &secondo);
    scanf("%d", &terzo);
    scanf(" %d", &quarto);


    if(primo < secondo && primo < terzo && primo < quarto) {
        printf("Il numero più piccolo è: %d\n il più grande è: %d\n", primo, quarto);
    }

    else if(secondo < primo && secondo < terzo && secondo < quarto){
        printf("Il numero più piccolo è: %d\n il più grande è: %d\n", secondo, quarto);
    }

    else if(terzo < primo && terzo < secondo && terzo < quarto){
        printf("Il numero più piccolo è: %d\n il più grande è: %d\n", terzo, quarto);

    }
    else if(quarto < primo && quarto < secondo && quarto < terzo) {
        printf("Il numero più piccolo è: %d\n il più grande è: %d\n", quarto, terzo);
    }
    else {
        printf("Perfavore inserie un numero valido\n");
    }
    
    return 0; 
}