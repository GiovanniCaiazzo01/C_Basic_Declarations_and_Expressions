#include <stdio.h>

int main(){
    int ore, minuti;

    printf("Perfavore inserisci un orario(Hours) sulla base di tempo a 24 ore: ");
    scanf("%d", &ore);
    if(ore >24) {
        printf("perfavore inserisci numeri minori di 24\n");
        return 0;
    }
    printf("Inserisci i minuti: ");
    scanf("%d", &minuti);

    switch(ore){
        // // case 13: printf("l'equivalente del tempo in 12 ore: %d" ); 
        break;
        case 14:
        ore=2;
        printf("l'equivalente del tempo in 12 ore: %d:%d PM \n", ore,minuti); 
        break;
        case 15: 
        ore=3;
        printf("l'equivalente del tempo in 12 ore: %d:%d PM \n", ore,minuti); 
        break;
        case 16: 
        ore=4;
        printf("l'equivalente del tempo in 12 ore: %d:%d PM \n", ore,minuti); 
        break;
        case 17: 
        ore=5;
        printf("l'equivalente del tempo in 12 ore: %d:%d PM \n", ore,minuti); 
        break;
        case 18: 
        ore=6;
        printf("l'equivalente del tempo in 12 ore: %d:%d PM \n", ore,minuti); 
        break;
        case 19: 
        ore=7;
        printf("l'equivalente del tempo in 12 ore: %d:%d PM \n", ore,minuti); 
        break;
        case 20: 
        ore=8;
        printf("l'equivalente del tempo in 12 ore: %d:%d PM \n", ore,minuti); 
        break;
        case 21: 
        ore=9;
        printf("l'equivalente del tempo in 12 ore: %d:%d PM \n", ore,minuti); 
        break;
        case 22: 
        ore=10;
        printf("l'equivalente del tempo in 12 ore: %d:%d PM \n", ore,minuti); 
        break;
        case 23: 
        ore=11;
        printf("l'equivalente del tempo in 12 ore: %d:%d PM \n", ore,minuti); 
        break;
        case 24: 
        ore=00;
        printf("l'equivalente del tempo in 12 ore: %d:%d AM \n", ore,minuti); 
        break;

    }


    return 0;
}