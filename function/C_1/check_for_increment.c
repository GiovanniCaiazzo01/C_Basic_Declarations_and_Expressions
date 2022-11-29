#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int arrayLen(int arr[])
{
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        count += 1;
    }
    return count;
}

int readFile()
{
    int num;
    FILE *fptr;
    fptr = fopen("./demo.txt", "r");

    fscanf(fptr, "%d", &num);
    printf("%d\n", num);
    fclose(fptr);
    return num;
}

int main(void)
{

    printf("%d\n", readFile());
    int arr[] = {
        199,
        200,
        208,
        210,
        200,
        207,
        240,
        269,
        260,
        263,
    };

    int increment = 0;
    for (int i = 0; i < arrayLen(arr); i++)
    {
        if (arr[i] < arr[i + 1])
        {
            increment += 1;
        }
        else if (i > arrayLen(arr))
        {
            break;
        }
    }
    printf("%d\n", increment);
}