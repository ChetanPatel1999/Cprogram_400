//wap to print table of given number.
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter a num : ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++) 
    {
        printf("%d x %d = %d \n",n,i,n * i); 
    }
}