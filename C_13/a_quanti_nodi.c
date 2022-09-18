#include <stdio.h>

int main(){

    int velocita_nodo = 0; 

    printf("Perfavore inserisci la velicità in nodi: ");
    scanf("%d", &velocita_nodo);

    if(velocita_nodo < 1 ) {
        printf("Calmo \n");
    }

    else if(velocita_nodo >= 1 && velocita_nodo <= 3){
        printf("Bava di vento \n");
    }

    else if(velocita_nodo >= 4 && velocita_nodo <= 27){
        printf("Brezza \n");
    }

    else if(velocita_nodo >= 28 && velocita_nodo <= 47){
        printf("Burrasca \n");
    }

    else if(velocita_nodo >= 48 && velocita_nodo <= 63){
        printf("Tempesta \n");
    }

    else if(velocita_nodo >63){
        printf("Uragano \n");
    }

    else{
        printf("Perfavore inserisci un valore valido \n");
    }

    return 0;

}