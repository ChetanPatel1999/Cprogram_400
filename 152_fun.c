// with return type , with parameter
#include <stdio.h>
int add(int a, int b)
{
    return (a + b);
}
int cube(int num)
{
    return (num * num * num);
}
float circle(float r)
{
    return (3.141 * r * r);
}
float average(int a, int b)
{
    return (a + b) / 2.0;
}
int individul_sum(int num) // 345
{
    int sum = 0, rem;
    while (num > 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    return sum;
}
void main()
{
    // printf("cube = %d\n", cube(4));
    printf("circle area  = %.2f\n", circle(5));
    printf("avrage   = %.2f\n", average(5, 6));
    printf("individul digit sum = %d\n", individul_sum(345));

    int num = 67;
    int res = individul_sum(num);
    if (res % 2 == 0)
    {
        printf("res is even");
    }
    else
    {
        printf("res is odd");
    }
}