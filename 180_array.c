// wap to print each array element square.
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

    // 2 4 5 8 3
    printf("\nsquare of array element are : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]*arr[i]);
    }
}