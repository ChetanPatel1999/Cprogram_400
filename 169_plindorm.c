// wap to check given number is plindrom or not.
#include <stdio.h>
void main()
{
    int num, rem, rev = 0, temp;
    printf("enter a num: ");
    scanf("%d", &num); // 121
    temp = num;
    while (num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem; // 435
        num = num / 10;
    }
    if (rev == temp)
    {
        printf("plindrom number");
    }
    else
    {
        printf("not plindrom");
    }
}