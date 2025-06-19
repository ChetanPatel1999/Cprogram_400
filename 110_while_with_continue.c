// continue example
#include <stdio.h>
void main()
{
    int i;
    i = 0;
    while (i <= 9)
    {
        i++;
        if (i == 5)
        {
            continue;
        }
        printf("%d ", i);
    }
}