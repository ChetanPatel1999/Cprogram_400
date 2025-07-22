// strlwr() :- its convert string in lower case.
#include <stdio.h>
#include <string.h>
void main()
{
    char str[50];
    printf("enter string : ");
    gets(str);
    printf("string = %s\n", str);
    strlwr(str);
    printf("lower string = %s\n", str);
}