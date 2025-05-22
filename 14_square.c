// wap to find cube of given number.
#include <stdio.h>
void main()
{
    int num, cube;
    printf("enter a num : ");
    scanf("%d", &num);
    cube = num * num * num;
    printf("cube of %d = %d ", num, cube);
}