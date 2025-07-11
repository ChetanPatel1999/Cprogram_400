//3 * 3 matrix
#include <stdio.h>
void main()
{
     //     r  c
    int mat[3][3] = {{12, 34, 56}, {44, 55, 66}, {11, 21, 31}};
    int i, j;
    printf("matrix elements : \n");
    for (i = 0; i < 3; i++) // 3
    {
        for (j = 0; j < 3; j++) // 0
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}