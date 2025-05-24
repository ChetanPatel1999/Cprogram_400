// wap to find sum of individul digit of given two digit number.
#include <stdio.h>
void main()
{
    int num, r, s, sum;
    printf("enter a two digit num : ");
    scanf("%d", &num);
    r = num / 10;
    s = num % 10;
    sum = r + s;
    printf("individul digit sum : %d", sum);
}