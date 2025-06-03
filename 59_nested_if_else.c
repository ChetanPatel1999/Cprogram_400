// wap to check voter is eligible to casting vote in india or not.
#include <stdio.h>
void main()
{
    char country;
    printf("enter 'i' if yoy are indian : ");
    scanf("%c", &country);
    if (country == 'i')
    {
        int age;
        printf("enter your age : ");
        scanf("%d", &age);
        if (age >= 18)
        {
            printf("you can vote in india");
        }
        else
        {
            printf("you can not vote in india");
        }
    }
    else
    {
        printf("you are not indian");
    }
}