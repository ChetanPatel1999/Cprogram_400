// strcat() :-its used to combine two string.
#include <stdio.h>
#include <string.h>
void main()
{
    char str1[50], str2[50];
    printf("enter string1 : ");
    gets(str1);
    printf("enter string2 : ");
    gets(str2);
    printf("string1 = %s\n", str1);
    printf("string2 = %s\n", str2);
    strcat(str1, " ");
    strcat(str1, str2);
    printf("string1 = %s\n", str1);
    printf("string2 = %s\n", str2);
}