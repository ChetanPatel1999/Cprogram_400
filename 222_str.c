// strcmp() :-its compare two string are same or different.
#include <stdio.h>
#include <string.h>
void main()
{
    char str1[50], str2[50];
    printf("enter string1 : ");
    gets(str1);
    printf("enter string2 : ");
    gets(str2);

    if (strcmp(str1, str2) == 0)
    {
        printf("string are same");
    }
    else
    {
        printf("string are different");
    }
}