// dynamic array
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, *ptr, *temp;
    ptr = malloc(20); // arr
    temp = ptr;
    printf("enter array element : ");
    for (i = 0; i < 5; i++) // 5
    {
        scanf("%d", ptr);
        ptr++; // 420
    }
    ptr = temp;
    printf("array elements are :- ");
    for (i = 0; i < 5; i++) // 1
    {
        printf("%d ", *ptr);
        ptr++;
    }

    // sum array element
    // 2 6 4 7 8
    int sum = 0;
    ptr = temp;
    for (i = 0; i < 5; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    printf("\nsum of array element = %d\n", sum);
}