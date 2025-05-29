// wap to find greatest num between two numbers.
#include <stdio.h>
void main()
{
    int num1, num2;
    printf("enter num1 value : ");
    scanf("%d", &num1);
    printf("enter num2 value : ");
    scanf("%d", &num2);
    if (num1 > num2)
    {
        printf("greatest num : %d", num1);
    }
    else
    {
        printf("greatest num : %d", num2);
    }
}