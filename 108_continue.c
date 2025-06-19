// continue example
#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        printf("%d ", i);//1 3 5 7 9  
    }
}