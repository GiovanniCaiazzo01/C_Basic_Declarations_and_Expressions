#include <stdio.h>

int main()
{

    int day, mese, anno;

    printf("Perfavore inserisci la data (mm/dd/yy): ");
    scanf("%d/%d/%d", &day, &mese, &anno);


    switch (day)
    {
    case 1:
    case 21:
    case 31:
        printf("st ");
        break;
    case 2:
    case 22:
        printf("nd ");
        break;
    case 3:
    case 23:
        printf("rd ");
        break;
    default:
        printf("th ");
        break;
    }
    switch (mese)
    {
    case 1:
        printf("Jannuary");
        break;

    case 2:
        printf("February");
        break;

    case 3:
        printf("March");
        break;

    case 4:
        printf("April");
        break;

    case 5:
        printf("May");
        break;

    case 6:
        printf("June");
        break;

    case 7:
        printf("July");
        break;

    case 8:
        printf("August");
        break;

    case 9:
        printf("September");
        break;

    case 10:
        printf("October");
        break;

    case 11:
        printf("November");
        break;

    case 12:
        printf("December");
        break;
    }
    printf("Dated This %d day of %d, 20%d\n", day, mese, anno);


    return 0;
}