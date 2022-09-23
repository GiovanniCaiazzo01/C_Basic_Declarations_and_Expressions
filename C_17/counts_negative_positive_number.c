#include <stdio.h>

// Write a C program that read 5 numbers and counts the number of positive numbers and negative numbers

int main(){

    int arr [5];
    int input = 0, positive = 0, negative =0;
    printf("Perfavore inserisci 5 numeri => \n");

    for(int i = 0; i < 5; i++){
        printf("inserisci il numero:");
        scanf("%d", &input);
        arr[i]=input;
        arr[i] < 0 ? positive++ : negative++;
    }

    for(int j = 0; j < 5; j++){
        printf("%d ", arr[j]);
    }

    positive > negative ? 
        printf("\nla maggioranza dei numeri presenti è quella dei positivi %d > %d", positive, negative):
        printf("\nla maggioranza dei numeri presenti è quella dei negativi %d > %d", negative, positive);
    
    return 0; 
}