// Write a program to accept a number and check it is multiple of 3,4,5or multiple of
//  3,4 or multiple of 4,5 or multiple of 3,5 or only multiple of 3 or only multiple of 4 or
//  only multiple of 5  or not multiple of 3,4,5.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num); // 60
    if (num % 4 == 0 && num % 5 == 0 && num % 3 == 0)
    {
        printf("multiple of 3,4,5 ");
    }
    else if (num % 3 == 0 && num % 4 == 0)
    {
        printf("multiple of 3 and 4");
    }
    else if (num % 3 == 0 && num % 5 == 0)
    {
        printf("multiple of 3 and 5");
    }
    else if (num % 4 == 0 && num % 5 == 0)
    {
        printf("multiple of 4 and 5");
    }
    else if (num % 3 == 0)
    {
        printf("multiple of 3 ");
    }
    else if (num % 5 == 0)
    {
        printf("multiple of 5 ");
    }
    else if (num % 4 == 0)
    {
        printf("multiple of 4 ");
    }
    else
    {
        printf("not multiple of 3,4,5 ");
    }
}