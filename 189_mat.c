//3 * 2 matrix
#include <stdio.h>
void main()
{
     //     r  c
    int mat[3][2] = {{12, 34}, {44, 55}, {11, 21}};
    int i, j;
    printf("matrix elements : \n");
    for (i = 0; i < 3; i++) // 3
    {
        for (j = 0; j < 2; j++) // 0
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}