// break stmnt
#include <stdio.h>
void main()
{
    int i;
    i = 1;
    while (i <= 10) // 
    {
        if (i == 5)
        {
            break;
        }
        printf("%d\n", i);//1 2 3 4
        i++;//5
    }
}