#include <stdio.h>
void main()
{
    int i, j,a=1;
    for (i = 1; i <= 4; i++) // i=2
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
}