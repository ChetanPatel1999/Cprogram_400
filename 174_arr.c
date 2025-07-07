// wap to display sum of all array element.
#include <stdio.h>
void main()
{
    int marks[5] = {20, 40, 10, 30, 0}, i;
    printf("students marks are  : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", marks[i]);
    }
    int sum = 0;
    for (i = 0; i < 5; i++)//5
    {
        sum = sum + marks[i];//100
    }
    printf("\nstudent marks sum : %d", sum);
}