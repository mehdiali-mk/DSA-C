/*
Write a program to get elements from user, store and display using 2-dimensional array.
*/

#include <stdio.h>
#include <conio.h>

void main()
{

    int rowSize, colSize;

    printf("Enter the row size = ");
    scanf("%d", &rowSize);

    printf("Enter the column size = ");
    scanf("%d", &colSize);

    int array[rowSize][colSize];

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            printf("Enter array[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    printf("\n\n2-D Array entered:\n");
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    getch();
}