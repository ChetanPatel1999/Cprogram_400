// wap to print max element from array.
#include <stdio.h>
void main()
{
    int n;
    printf("enter array size : ");
    scanf("%d", &n);
    int arr[n], i;
    printf("enter array element : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("array element are : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // find max element
    int max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max > arr[i])
        {
            max = arr[i];
        }
    }
    printf("\nmax element = %d", max);
}