// wap to check given number is less than 500 or greater then 500.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num); // 40
    if (num > 500)
    {
        printf("num is gretaer then 500");
    }
    if (num < 500)
    {
        printf("num is less than 500");
    }
    if (num == 500)
    {
        printf("num is equal to 500");
    }
}