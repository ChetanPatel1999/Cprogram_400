// wap to return sum between given range using recursion.
#include <stdio.h>
int range(int s, int e)
{
    static int res = 0;
    res = res + s;
    s++;
    if (s <= e)
    {
        range(s, e);
    }
    return res;
}
void main()
{
    printf("sum = %d\n", range(1, 10));
}