#include <stdio.h>



// // Scrivere un programma che chiedere all’utente di inserire interi positivi (inserisce 0 per
// // terminare) e stampa il massimo, il minimo, la somma degli elementi, il numero di elementi
// // pari, il numero di elementi dispari. Salvare i numeri in un array ed usare il minor numero di
// // cicli.

int main(void){

    
//     // numeri vengono salvati in un array [v]
//     // numero di elementi dispari [v]
//     // numero di elementi pari  [v]
//     // somma di tutti gli elementi [v]
//     // numero minimo [v]
//     // numero massimo [v]
//     // 0 per terminare il programma []

    int len_arr = 0; 
    int user_input = 0; 
    int numeri_pari = 0;
    int numeri_dispari = 0;
    int numero_minimo = 0; 
    int numero_massimo = 0;
    int somma = 0;

    printf("Perfavore inserisci quanti numeri vuoi inserire: ");
    scanf("%d", &len_arr);
    int a[len_arr];
    
    printf("hai scelto di inserire %d numeri\n", len_arr);
    for(int i=0; i<len_arr; i++ ){
        printf("[%d/%d] inserisci numero: ", i, len_arr);
        scanf("%d", &user_input);
        a[i] = user_input;
    }

    a[0] < a[1] ? (numero_minimo = a[0]) : (numero_massimo = a[1]);

    for(int j =0; j<len_arr; j++){
        somma += a[j];
        a[j] %2 == 0 ? numeri_pari++ : numeri_dispari++; 
        if(a[j] < numero_minimo){
            numero_minimo = a[j];
        }
        else if(a[j]>numero_massimo){
            numero_massimo=a[j];
        }        
    }

    printf("il numero massimo: %d\n", numero_massimo);
    printf( "il numero minimo: %d\n", numero_minimo);
    printf("numero di elementi pari: %d\n", numeri_pari);
    printf("numero di elementi dispari: %d\n", numeri_dispari);
    printf("somma dei numeri: %d\n", somma);

 

    return 0;
}


