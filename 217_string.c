// strupr() :- its convert string in upper case.
#include <stdio.h>
#include <string.h>
void main()
{
    char str[50];
    printf("enter string : ");
    gets(str);
    printf("string = %s\n", str);
    strupr(str);
    printf("string = %s\n", str);
}