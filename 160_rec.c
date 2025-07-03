// wap to print even number between given range  using recursion.
#include <stdio.h>
void range(int s, int e)
{
    if (s % 2 == 0)
    {
        printf("%d  ", s);
    }
    s++;
    if (s <= e)
    {
        range(s, e);
    }
}
void main()
{
    range(1, 20);
}