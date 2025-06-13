// wap to find sum of individual digit of given number.
#include <stdio.h>
void main()
{
    int num, rem, sum = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 328
    while (num > 0)
    {
        rem = num % 10;  // 3
        sum = sum + rem; // 13
        num = num / 10;  // 0
    }
    printf("sum of individula digit : %d", sum);
}