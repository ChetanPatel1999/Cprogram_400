#include <stdio.h>
void main()
{
    int a, b, c, p;
    do
    {
        printf("enter two numbres : ");
        scanf("%d%d", &a, &b);
        c = a + b;
        printf("sum = %d\n", c);

        printf("you want more number addition press 1 : ");
        scanf("%d", &p);
    } while (p == 1);
}