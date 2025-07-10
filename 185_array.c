// wap to copy one array into another array.
#include <stdio.h>
void display(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void main()
{
    int arr1[5] = {12, 34, 56, 78, 90};
    int arr2[5];
    int arr3[5];
    int i;
    // copy one array element into another array
    for (i = 0; i < 5; i++)
    {
        arr2[i] = arr1[i];
    }
    display(arr1, 5);
    display(arr2, 5);

    // copy one array element into another array but with square
    for (i = 0; i < 5; i++)
    {
        arr3[i] = arr1[i] * arr1[i];
    }
    display(arr1, 5);
    display(arr3, 5);
}