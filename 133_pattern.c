#include <stdio.h>
void main()
{
    int i, j, a;
    for (i = 1; i <= 5; i++)
    {
        a = 0;
        for (j = 1; j <= i; j++)
        {
            printf("%d ", a);
            a = 1 - a;
        }
        printf("\n");
    }
    
}
