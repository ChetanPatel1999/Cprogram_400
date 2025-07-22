// strrev() :- its reverse the given string.
#include <stdio.h>
#include <string.h>
void main()
{
    char str[50];
    printf("enter string : ");
    gets(str);
    printf("string = %s\n", str);
    strrev(str);
    printf("reverse string = %s\n", str);
}