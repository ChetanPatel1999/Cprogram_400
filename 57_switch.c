// wap to check given number is nagative positive.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num);//-78
    switch (num >= 0)
    {
     case 1: printf("num is positive ");break;
     case 0 :printf("num is nagative");break;
    }
}