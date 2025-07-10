// how to pass array in function.
#include <stdio.h>
int sum_array(int arr[], int n)
{
    int sum = 0, i;
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
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
    int arr2[3] = {4, 8, 12};
    int arr3[8] = {2, 8, 5, 2, 7, 5, 8, 9};
    printf("arr1 elements ...\n");
    display(arr1, 5);
    printf("sum1 = %d\n", sum_array(arr1, 5));
    printf("arr2 elements ...\n");
    display(arr2, 3);
    printf("sum2 = %d\n", sum_array(arr2, 3));
    printf("arr3 elements ...\n");
    display(arr3, 8);
    printf("sum3 = %d\n", sum_array(arr3, 8));
}