#include <stdio.h>
void add() // function defination
{
    int a, b, c;
    printf("enter two numbers : ");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("sum = %d\n", c);
}
void main()
{
    int i;
    printf("welcome to main function\n");
    for (i = 1; i <= 5; i++) // 6
    {
        add();
    }
}
