// nested loops
#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++) // i=2
    {
        for (j = i; j <= 5; j++) // j=3
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}