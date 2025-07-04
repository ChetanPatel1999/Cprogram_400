// wap to print factorial of given number using recursion.
#include <stdio.h>
int factorial(int num)
{
    if (num == 0)
    {
        return 1;
    }
    return num * factorial(num - 1);
}
void main()
{
    printf("factorial of 5 : %d\n", factorial(5));
}