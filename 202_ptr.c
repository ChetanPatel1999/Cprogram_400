// pointer to array
#include <stdio.h>
void main()
{
    int arr[5];
    int i, *ptr;
    ptr = &arr[0]; // arr
    printf("enter array element : ");
    for (i = 0; i < 5; i++) // 5
    {
        scanf("%d", ptr);
        ptr++; // 420
    }
    ptr = arr;
    printf("array elements are :- ");
    for (i = 0; i < 5; i++) // 1
    {
        printf("%d ", *ptr);
        ptr++;
    }

    // sum array element
    // 2 6 4 7 8
    int sum = 0;
    ptr = arr;
    for (i = 0; i < 5; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    printf("sum of array element = %d\n", sum);
}