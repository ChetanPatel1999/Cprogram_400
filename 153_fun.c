// with return type , with parameter
#include <stdio.h>
int factorial(int num)
{
    int i, fact = 1;
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int range_sum(int s, int e)
{
    int sum = 0, i;
    for (i = s; i <= e; i++)
    {
        sum = sum + i;
    }
    return sum;
}
void main()
{
    printf("factorial 4 = %d\n", factorial(4));
    printf("sum 4 to 8 = %d", range_sum(4, 8));
}