#include <stdio.h>
void main()
{
    int i, j;
    for (i = 'A'; i <= 'E'; i++) // 4
    {
        for (j = 'A'; j <= 'E'; j++)
        {
            printf("%c ", j);
        }
        printf("\n");
    }
}