// we can change variable value using pointer.
#include <stdio.h>
void main()
{
    int a = 12;
    int *ptr;
    ptr = &a;
    printf("value of a = %d\n", a);           // 12
    printf("value of a by ptr = %d\n", *ptr); // 12
    *ptr = 90;
    printf("value of a = %d\n", a);           // 90
    printf("value of a by ptr = %d\n", *ptr); // 90
    *ptr = *ptr + 10;
    printf("value of a = %d\n", a);           // 100
    printf("value of a by ptr = %d\n", *ptr); // 100
}