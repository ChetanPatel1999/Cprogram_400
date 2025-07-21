// multiword string get from user
#include <stdio.h>
void main()
{
    char name[20];
    printf("enter string : ");
    scanf("%[^\n]s", name);
    printf("string = %s", name);
}