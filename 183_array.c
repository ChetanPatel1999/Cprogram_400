// wap to check given element in present in array or not.
#include <stdio.h>
void main()
{
    int arr[5] = {12, 56, 78, 44, 33};
    int n, i, c = 0;
    printf("enter a serach num : ");
    scanf("%d", &n); // 88
    for (i = 0; i < 5; i++)
    {
        if (n == arr[i])
        {
            c = 1;
            break;
        }
    }
    if (c == 1)
    {
        printf("hai..");
    }
    else
    {
        printf("nhi hai..");
    }
}