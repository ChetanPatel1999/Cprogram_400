// example of goto
#include <stdio.h>
void main()
{
    int i = 1;
lable:
    printf("hello world institute\n");
    i++; // 3
    if (i <= 5)
    {
        goto lable;
    }
    printf("after if condition");
}