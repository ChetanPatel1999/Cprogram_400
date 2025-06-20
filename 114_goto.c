// wap to print 1 to 10 number using goto stmnt.
#include <stdio.h>
void main()
{
    int i;
    i = 1;
    printf("%d \n", i);
    i++;
    if (i <= 10)
    {
        goto lab;
    }
    printf("stmnt1\n");
    printf("stmnt2\n");
lab:
    printf("belove lable");
}