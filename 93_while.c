// wap to print reverse number of given number.
#include <stdio.h>
void main()
{
    int num, rem, rev = 0;
    printf("enter a num: ");
    scanf("%d", &num);
    while (num > 0)
    {
        rem = num % 10;       // 3
        rev = rev * 10 + rem; // 543
        num = num / 10;       // 3
    }
    printf("reverse number : %d ", rev); // 543
}