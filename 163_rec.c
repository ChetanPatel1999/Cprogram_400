//wap to print reverse number from given number to 1.
#include <stdio.h>
void fun(int num)
{
    printf("%d ", num);
    if (num > 1)
    {
        fun(num - 1);
    }
}
void main()
{
    fun(15);
}