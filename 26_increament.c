#include <stdio.h>
void main()
{
    int a = 12;
    printf("a= %d\n", a);
    a++; // 13
    printf("a= %d\n", a);
    ++a; // 14
    printf("a= %d\n", a);
    a--; // 13
    printf("a= %d\n", a);
    --a; // 12
    printf("a= %d\n", a);
}