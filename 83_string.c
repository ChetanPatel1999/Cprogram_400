#include <stdio.h>
#include <string.h>
void main()
{
    char str[30] = "abbiiacdaiii";
    //    printf("enter a string : ");
    //    gets(str);
    printf("string : %s\n", str);
    int i, j, c;
    for (i = 0; i < strlen(str); i++) // i=1
    {
        c = 1;
        if (str[i] != -1)
        {
            for (j = i + 1; j < strlen(str); j++) // 7
            {
                if (str[i] == str[j])
                {
                    c++; // 3
                    str[j] = -1;
                }
            }
            printf("%c is appear %d times\n", str[i], c);
        }
    }
}