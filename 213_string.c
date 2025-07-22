// wap to count and print vovle in given string.
#include <stdio.h>
void main()
{
    char str[50], c = 0, i;
    printf("enter string : ");
    gets(str); // chetan123
    printf("string : %s\n", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'i' || str[i] == 'u')
        {
            printf("%c", str[i]);
            c++;
        }
    }
    printf("\ntotal vovel in string : %d", c);
}