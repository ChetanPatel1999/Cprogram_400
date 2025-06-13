// wap to print digit count in given number.
#include <stdio.h>
void main()
{
    int num, c = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 567
    while (num > 0)
    {
        c++; //3
        num = num / 10;
    }
    printf("digit count in number : %d", c);
}