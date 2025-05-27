// pre / post
#include <stdio.h>
void main()
{
    int a = 12, b;

    // b = a++; //post :- first value of a assign in b than increase a value
    b = ++a; // pre :- first increase value of a then incresing value assign in b
    printf("a = %d\n", a); // 13
    printf("b = %d\n", b); // 13
}