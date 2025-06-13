// wap to find a given digit in given number or not.
#include <stdio.h>
void main()
{
    int num, s, rem, digit_found = 0;
    printf("enter a number : ");
    scanf("%d", &num); // 675737
    printf("enter a digit : ");
    scanf("%d", &s); // 8
    while (num > 0)
    {
        rem = num % 10;
        if (rem == s)
        {
            digit_found++;
        }
        num = num / 10;
    }

    if (digit_found > 0)
    {
        printf("digit found %d times", digit_found);
    }
    else
    {
        printf("digit is not found");
    }
}