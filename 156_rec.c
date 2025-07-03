//wap to print a msg 5 times using recursion.
#include <stdio.h>
void fun()
{
    static int i = 1; //its run in programm only once time
    printf("hello world institute\n");//5
    i++;//6
    if (i <= 5)
    {
        fun();
    }
}
void main()
{
    fun();
}