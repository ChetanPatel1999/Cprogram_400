// wap to add two numbers.
#include <stdio.h>
void main()
{
    int num1, num2, sum;
    printf("this is addition app \n");
    printf("enter first num : ");
    scanf("%d", &num1);
    printf("enter seoncd num : ");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("sum of %d and %d = %d", num1, num2, sum);
}