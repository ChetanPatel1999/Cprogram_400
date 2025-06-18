// wap to search given number in given table.
#include <stdio.h>
void main()
{
    int tab, num, i, found = 0;
    printf("enter table num : ");
    scanf("%d", &tab); // 6
    printf("enter serach num : ");
    scanf("%d", &num); // 19
    for (i = 1; i <= 10; i++)
    {
        if (tab * i == num)
        {
            found = 1;
            break;
        }
        if (tab * i > num)
        {
            break;
        }
    }
    if (found == 1)
    {
        printf("num is found");
    }
    else
    {
        printf("num is not found");
    }
}