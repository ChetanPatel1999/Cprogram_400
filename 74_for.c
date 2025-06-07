// wap to count even number 1 to 10.
#include <stdio.h>
void main()
{
    int i, c = 0;
    for (i = 1; i <= 20; i++)
    {
        if (i % 2 == 0)
        {
            c++;
        }
    }
    printf("total even number count : %d", c);
}