// multiword string get from user
// gets():- its used to take string from user
#include <stdio.h>
void main()
{
    char name[20];
    printf("enter string : ");
    gets(name);
    printf("string = %s\n", name);
    puts(name); // its display string on output console
}