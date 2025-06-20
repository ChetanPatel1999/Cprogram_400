#include <stdio.h>
void main()
{
    int i;
    i = 1;
    while (i < 20)
    {
        printf("%d ", i);
        i++; 
        if (i % 3 == 0 || i % 5 == 0)// 1 2 2 4 6  7 8 8 10 11 11 13 14 14 16 17 17 19 
        {
            i++;
            continue;
        }
        if (i == 7)
        {
            continue;
        }
        printf("%d ", i);
    }
}