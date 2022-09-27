#include <stdio.h>


int main(void){

    int n, i;

    printf("inserisci un numero : ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("%d %d \n", i, i * i);
    }

    return 0;
}