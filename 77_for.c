// wap to print fabonacci series of n numbers.
#include <stdio.h>
void main()
{
    int i, n, a = -1, b = 1, c;
    printf("enter number of terms fabonacci serise : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
}