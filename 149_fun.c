// no return type , no parameter
#include <stdio.h>
void add()
{
    int a, b, c;
    printf("enter two numbers : ");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("sum = %d\n", c);
}
// make a function to find cube of number
void cube()
{
    int num, cube;
    printf("enter a num : ");
    scanf("%d", &num);
    cube = num * num * num;
    printf("cube of %d = %d\n", num, cube);
}
// make function to print table
void table()
{
    int num, i;
    printf("enter a num : ");
    scanf("%d", &num);
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", num, i, num * i);
    }
}
// wap to find factorial of given number.
void factorial()
{
    int fact = 1, num, i;
    printf("enter a num : ");
    scanf("%d", &num); // 5
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("factorial of %d = %d\n", num, fact);
}
void main()
{
    factorial();
}