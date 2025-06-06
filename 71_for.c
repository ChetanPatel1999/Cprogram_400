// wap to print sum 1 to given number .
#include <stdio.h>
void main()
{
    int i, sum = 0, n;
    printf("enter a number : ");
    scanf("%d", &n);         // 10
    for (i = 1; i <= n; i++) // 2
    {

        sum = sum + i;
    }

    printf("sum of 1 to %d : %d", n, sum);
}