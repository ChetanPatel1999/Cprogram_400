// wap to check given char is vovel or consonent.
#include <stdio.h>
void main()
{
    char alpha;
    printf("enter a alphabet : ");
    scanf("%c", &alpha); // l
    if (alpha == 'a' || alpha == 'o' || alpha == 'i' || alpha == 'e' || alpha == 'u')
    {
        printf("alphabet is vovel");
    }
    else
    {
        printf("alphabet is consonant");
    }
}