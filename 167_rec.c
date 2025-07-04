//wap to print sum 1 to given number using recursion.
#include <stdio.h>
int sum(int num)
{
    if (num == 1)
    {
        return 1;
    }
    return num + sum(num - 1);
}
void main()
{
    printf("sum = %d\n", sum(5));

    printf("sum = %d\n", sum(10));
}