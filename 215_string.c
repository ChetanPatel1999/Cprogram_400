// wap to find length of string.
#include <stdio.h>
void main()
{
    char str[50], i;
    printf("enter string : ");
    gets(str); // tanu
    printf("string = %s\n", str);
    int c = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        c++;
    }
    printf("string length : %d", c);
}