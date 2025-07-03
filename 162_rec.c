// wap to return sum between given range using recursion.
#include <stdio.h>
int i = 1; // globle variable
void table(int num)
{
    printf("%d * %d = %d\n", num, i, num * i);
    i++; // 2
    if (i <= 10)
    {
        table(num);
    }
}
void main()
{
    table(4);
    i = 1;
    table(7);
}