// wap to print number between given range  using recursion.
#include <stdio.h>
void range(int s,int e)
{
    printf("%d  ", s);
    s++;//26
    if (s <= e)
    {
        range(s,e);
    }

}
void main()
{
    range(5,25);
    printf("\n");
    range(1,10);
}