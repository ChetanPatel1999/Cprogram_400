// pointer to array
#include <stdio.h>
void main()
{
    int arr[5] = {12, 34, 56, 78, 90};
    int i, *ptr;
    ptr = &arr[0]; // arr
    for (i = 0; i < 5; i++)//1
    {
        printf("%d ",*ptr);
        ptr++;
    }
}