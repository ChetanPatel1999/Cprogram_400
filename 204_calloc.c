// dynamic array
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i;
    int *ptr, *temp;
    int n;
    printf("enter dynamic array size : ");
    scanf("%d", &n);                     // 10
    ptr = (int *)calloc(n, sizeof(int)); // 400
    temp = ptr;                          // 400
    printf("enter array element : ");
    for (i = 0; i < n; i++) // 5
    {
        scanf("%d", ptr);
        ptr++; // 404
    }
    ptr = temp;
    printf("array elements are :- ");
    for (i = 0; i < n; i++) // 1
    {
        printf("%d ", *ptr);
        ptr++;
    }
    // sum array element
    // 2 6 4 7 8
    int sum = 0;
    ptr = temp;
    for (i = 0; i < n; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    printf("\nsum of array element = %d\n", sum);
    ptr = temp;
    free(ptr);
}