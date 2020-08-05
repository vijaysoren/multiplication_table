/***********
@VijaySoren
05-08-2020
************/

#include <stdio.h>
#include <conio.h>

int main ()
{
    int tableNumber, i;

    printf("Enter a table number to get a multiplication table\n");
    scanf("%d", &tableNumber);

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", tableNumber, i, tableNumber * i);
    }
    getch();
    return 0;
}