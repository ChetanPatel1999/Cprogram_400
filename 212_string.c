// multiword string get from user
// fgets():- its used to take string from user
#include <stdio.h>
void main()
{
    char name[20];
    printf("enter string : ");
    fgets(name, 20, stdin);
    printf("string = %s\n", name);
    fputs(name, stdout); // its display string on output console
}