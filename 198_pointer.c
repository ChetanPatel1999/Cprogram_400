// pointer in c language
#include <stdio.h>
void main()
{
    int a = 12;
    int *ptr;
    ptr = &a;
    printf("value of a = %d\n", a);
    printf("address of a = %d\n", &a);
    printf("address of a by ptr= %d\n", ptr);
    printf("value of a by ptr = %d\n", *ptr);//12
}