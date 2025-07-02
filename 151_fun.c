// with return type , with parameter
#include <stdio.h>
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
void main()
{
    int res = add(34, 7);
    printf("sum = %d\n", res);
    printf("sum = %d\n", add(7, 4));
    printf("sum = %d\n", add(17, 4));
}