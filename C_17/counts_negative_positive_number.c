#include <stdio.h>


int main(){

    int arr [5];
    int input = 0;
    printf("Perfavore inserisci 5 numeri => \n");

    for(int i = 0; i < 5; i++){
        printf("inserisci il primo numero:");
        scanf("%d", &input);
        arr[i]=input;
        printf("%d\n", arr[i]);
    }

    for(int ocaz = 0; ocaz < 5; ocaz++){
        printf("%d\n", arr[ocaz]);
    }
    
    return 0; 
}