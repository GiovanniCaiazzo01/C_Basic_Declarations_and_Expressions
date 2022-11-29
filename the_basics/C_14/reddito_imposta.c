#include <stdio.h>

#define SOGLIA_MINIMA  750
#define SOGLIA_MASSIMA  7000

int main(){

    int reddito = 0;
    printf("Perfavore inserisca il suo reddito imponibile: ");
    scanf("%d", &reddito);

    if(reddito <= SOGLIA_MINIMA) {
        printf("1 del reddito \n");
    }

    else if(reddito > SOGLIA_MINIMA && reddito <= 2250.00f) {
        printf("7.50$ pi+ il 2 della quota sopra i 750$ \n");
     }
 
    else if(reddito > 2250.00f  && reddito <= 3750.00f) {
        printf("37.50$ pi+ il 3 della quota sopra i 2.250$ \n");
     }

    else if(reddito > 3750.00f  && reddito <= 5250.00f) {
        printf("82.50$ pi+ il 4 della quota sopra i 3.750$ \n");
     }
     
    else if(reddito > 5250.00f  && reddito <= 7000.00f) {
        printf("142.50$ pi+ il 5 della quota sopra i 5.250f$ \n");
     }

    else if(reddito > SOGLIA_MASSIMA) {
    printf("230.00$ pi+ il 6 della quota sopra i 7.000$ \n");
    }

    else{
    printf("Perfavore inserire una cifra numerica \n");
    }

    return 0;

}