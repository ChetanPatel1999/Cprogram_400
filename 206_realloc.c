#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr, *temp, i, n1, n2;
    printf("enter dynamic array size : ");
    scanf("%d", &n1);
    ptr = (int *)malloc(n1 * sizeof(int));
    temp = ptr;
    printf("address of dynamic array : ");
    for (i = 0; i < n1; i++)
    {
        printf("%d ", ptr);
        ptr++;
    }
    ptr = temp;
    printf("\nenter new increase array size : ");
    scanf("%d", &n2);
    ptr = realloc(ptr, n2 * sizeof(int));

    printf("address of new increase dynamic array : ");
    for (i = 0; i < n2; i++)
    {
        printf("%d ", ptr);
        ptr++;
    }
}