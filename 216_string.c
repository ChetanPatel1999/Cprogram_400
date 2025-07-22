// wap to find length of string.
#include <stdio.h>
int length(int str[])
{
    int c = 0, i;
    for (i = 0; str[i] != '\0'; i++)
    {
        c++;
    }
    return c;
}
void main()
{
    char str[50], i;
    printf("enter string : ");
    gets(str); // tanu
    printf("string = %s\n", str);
    int l = length(str);
    printf("string length : %d", l);
}