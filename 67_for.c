// wap to print even number series.
#include <stdio.h>
void main()
{
    int i;
    printf("even number series : ");
    for (i = 1; i <= 30; i++) // 6
    {
        if (i % 2 == 0)
        {
            printf("%d ", i); // 3 6
        }
    }
}