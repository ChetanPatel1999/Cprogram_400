// wap to find lowest common multiple of given two number.
#include <stdio.h>
void main()
{
    int num1 = 21, num2 = 4, max, ans;
    max = num1 > num2 ? num1 : num2;
    ans = max;
    while (1)
    {
        if (max % num1 == 0 && max % num2 == 0)
        {
            printf(" LCM = %d", max);
            break;
        }
        max = max + ans;
    }
}