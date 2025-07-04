// wap to 1 to 10 number using recursion.
#include <stdio.h>
void fun(int num)
{
    if (num > 1)
    {
        fun(num - 1);
    }
    printf("hello world institute\n");
}
void main()
{
    fun(5);
}