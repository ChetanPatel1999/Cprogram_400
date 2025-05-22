// write a program to swap two variable value without using third variable.
#include <stdio.h>
void main()
{
    int a, b;
    printf("enter a value : ");
    scanf("%d", &a);
    printf("enter b value : ");
    scanf("%d", &b);
    printf("before swapping value : \n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    // a = a + b;
    // b = a - b;
    // a = a - b;

    // a = a * b;
    // b = a / b;
    // a = a / b;

    //using x-or operator
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("after swapping value : \n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}