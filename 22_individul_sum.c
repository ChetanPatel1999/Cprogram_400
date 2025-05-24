// wap to find sum of individul digit of given three digit number.
#include <stdio.h>
void main()
{
    int num, r, s, t, sum;
    printf("enter a three digit num : ");
    scanf("%d", &num);
    r = num / 100;
    s = (num % 100) / 10;
    t = num % 10;
    sum = r + s + t;
    printf("individul digit sum : %d", sum);
}