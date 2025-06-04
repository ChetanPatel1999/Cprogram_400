// for loop example
// wap to print 10 to 1 number.
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter ending range : ");
    scanf("%d", &n);         // 4
    for (i = 1; i <= n; i++)//3
    {
        printf("square of %d = %d\n", i, i * i);
    }
}