// wap to array element in reverse order.
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

    // 12 34 56 78 90
    printf("\nreverse array element are : ");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}