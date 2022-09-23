#include <stdio.h>


int main(){

    int arr [5];
    int input = 0;
    printf("Perfavore inserisci 5 numeri => \n");

    for(int i = 0; i < 5; i++){
        printf("inserisci il primo numero:");
        scanf("%d", &input);
        arr[i]=input;
    }
    printf("hai inserito i seguenti numeri: ");
    printf("%d\n", arr);
    return 0; 
}