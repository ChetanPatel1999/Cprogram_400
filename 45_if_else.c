// Write a program to check given number is divisible by 3, 4 and 8 or not.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num);
    if (num % 3 == 0 && num % 4 == 0 && num % 8 == 0)
    {
        printf("num is divisible by 3,4 and 8");
    }
    else
    {
        printf("num is not divisible by 3,4 and 8");
    }
}