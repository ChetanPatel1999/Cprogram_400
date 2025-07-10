// wap to check given element in present in array or not.
#include <stdio.h>
int num_found(int arr[], int size, int n)
{
    int i;
    for (i = 0; i < 5; i++)
    {
        if (n == arr[i])
        {
            return 1;
        }
    }
    return 0;
}
void main()
{
    int arr[5] = {12, 56, 78, 44, 33};
    int n, i, c = 0;
    printf("enter a serach num : ");
    scanf("%d", &n); // 88
    if (num_found(arr, 5, n))
    {
        printf("hai..");
    }
    else
    {
        printf("nhi hai..");
    }
}