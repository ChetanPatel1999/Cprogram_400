// Write a program to accept two numbers and
// check if the first is a multiple of the
// second.
#include <stdio.h>
void main()
{
    int first, second;
    printf("enter first num : ");
    scanf("%d", &first);
    printf("enter second num : ");
    scanf("%d", &second);
    if (first % second == 0)
    {
        printf("first is a multiple of the second");
    }
    else
    {
        printf("first is not a multiple of the second");
    }
}