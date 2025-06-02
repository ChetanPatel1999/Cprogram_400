// wap to print friend name according to frist latter of friend name.
#include <stdio.h>
void main()
{
    char name;
    printf("enter frist latter of name : ");
    scanf("%c", &name);//p
    switch(name)
    {
        case 'n': printf("nikhil mewade");break;
        case 'h': printf("harshit sharma");break;
        case 's': printf("soheb khan");break;
        case 'y':printf("yuvraj mandloi");break;
        case 'r':printf("rashi parihar");break;
        default: printf("no one in friend list which name start with %c ",name);
    }
}