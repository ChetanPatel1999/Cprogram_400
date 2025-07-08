// wap to take array element from user and display their sum and also avrage.
#include <stdio.h>
void main()
{
    int n;
    printf("enter array size : ");
    scanf("%d", &n); // 15
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

    // some all array element
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    float average;
    average = sum / (float)n;
    printf("\nsum of all array element = %d ", sum);
    printf("\naverage of all array element = %.2f", average);
}