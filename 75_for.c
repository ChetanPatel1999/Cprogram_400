// wap to check given number is perfact number or not.
#include <stdio.h>
void main()
{
    int i, n, sum = 0;
    printf("enter a num : ");
    scanf("%d", &n); // 6
    for (i = 1; i <= n; i++)//7
    {
        if (n % i == 0)
        {
            sum = sum + i;//12
        }
    }
    if (sum == 2 * n)
    {
        printf("perfact num");
    }
    else
    {
        printf("not perfact num");
    }
}