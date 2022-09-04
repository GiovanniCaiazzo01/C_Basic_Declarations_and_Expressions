#include <stdio.h>

#define NUM_VENTI 20
#define NUM_DIECI 10
#define NUM_UNO 1

int main (){

    int banconote = 0, venti = 0, dieci = 0, uno = 0, calcolo = 0; 

    printf("\n\nPerfavore inserisci le banconote: ");
    scanf("%d", &banconote);
    
    calcolo = banconote / NUM_VENTI;
    venti = calcolo;
    banconote -= calcolo * NUM_VENTI;
    calcolo = 0; 
    calcolo = banconote / NUM_DIECI;
    dieci = calcolo;
    banconote -= calcolo * NUM_DIECI;
    calcolo = 0;
    calcolo = banconote / NUM_UNO;
    uno = calcolo;
    banconote -= calcolo * uno;
    calcolo = 0;



    printf("\npuoi utilizzare...");
    printf("\n\n20$: %d", venti);
    printf("\n\n10$: %d", dieci);
    printf("\n\n1$: %d\n", uno);
    
    return 0;
}