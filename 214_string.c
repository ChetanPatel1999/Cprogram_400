// strlen() :- its return length of string.
#include <stdio.h>
#include <string.h>
void main()
{
    char str[50];
    printf("enter string : ");
    gets(str);
    printf("string = %s\n", str);
    int l = strlen(str);
    printf("string length = %d", l);
}