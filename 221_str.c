// strcpy() :-its used to copy one string into another string.
#include <stdio.h>
#include <string.h>
void main()
{
    char str1[50], str2[50];
    printf("enter string1 : ");
    gets(str1);
    printf("string1 = %s\n", str1);
    printf("string2 = %s\n", str2);
    // strcpy(str2, str1);
    strcpy(str2, "ram");
    printf("string1 = %s\n", str1);
    printf("string2 = %s\n", str2);
}