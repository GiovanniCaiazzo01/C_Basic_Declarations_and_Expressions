#include <stdio.h>

// Scrivere un programma che chiedere all’utente di inserire interi positivi
// inserisce 0 per terminare) e stampa il massimo, il minimo, la somma degli elementi,
//  il numero di elementi pari, il numero di elementi dispari. Salvare i numeri
//   in un array ed usare il minor numero di
// cicli.

// Todo: migliorare il controllo.
int main(void)
{
    int len_array = 0, somma = 0, max = 0, min = 0, num_pari = 0, num_dispari = 0, user_input = 0;
    printf("Perfavore inserisci quanti numeri vuoi inserire: ");
    scanf("%d", &len_array);
    int arr[len_array];

    printf("Hai scelto di inserire [%d] numeri \n", len_array);
    for (int j = 0; j < len_array; j++)
    {
        printf("[%d/%d] inseriti, perfavore inserisci qui i numeri => ", j, len_array);
        scanf("%d", &user_input);
        arr[j] = user_input;

        if (j == 0)
        {
            min = arr[j];
            max = arr[j];
        }

        // somma
        somma += user_input;

        // max - min
        if (arr[j] > max)
        {
            max = arr[j];
        }

        if (arr[j] < min)
        {
            min = arr[j];
        }

        // pari - dispari
        arr[j] % 2 == 0 ? ++num_pari : ++num_dispari;
    }

    printf("la somma dei numeri è => %d \n", somma);
    printf("totale dei numeri dispari => %d \n", num_dispari);
    printf("totale numeri pari => %d \n", num_pari);
    printf("numero max => %d \n", max);
    printf("numero minimo => %d \n", min);

    return 0;
}