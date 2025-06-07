// wap to print  even number 1 to 10.
#include <stdio.h>
void main()
{
    int i;
    i = 1;
    while (i <= 10)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
        i++;
    }
}