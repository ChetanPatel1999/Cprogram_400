// with return type but no parameter
#include <stdio.h>
int add()
{
    int a, b, c;
    printf("enter two numbers : ");
    scanf("%d%d", &a, &b);
    c = a + b;
    return c;
}
void main()
{
    printf("sum = %d\n", add());
}