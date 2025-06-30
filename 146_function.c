#include <stdio.h>
void add(); // function declaration
void sub(); // function declaration
void main()
{
    printf("hello world institute\n");
    add(); // function calling
    add();
    add();
    sub();
    printf("main function is end");
}
void add() // function defination
{
    int a, b, c;
    printf("enter two numbers : ");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("sum = %d\n", c);
}
void sub() // function defination
{
    int a, b, c;
    printf("enter two numbers : ");
    scanf("%d%d", &a, &b);
    c = a - b;
    printf("sub = %d\n", c);
}