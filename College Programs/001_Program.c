/*
AIM: Write a program to get elements from user, store and display using 1-dimensional array.
*/
#include <stdio.h>
#include <conio.h>

void main()
{

    int arraySize;
    printf("Enter the array size = ");
    scanf("%d", &arraySize);

    int array[arraySize];
    for (int i = 0; i < arraySize; i++)
    {
        printf("Enter array[%d] = ", i);
        scanf("%d", &array[i]);
    }

    printf("\n\nYou have entered this array:\n");
    for (int i = 0; i < arraySize; i++)
    {
        printf("  %d  ", array[i]);
    }

    getch();
}