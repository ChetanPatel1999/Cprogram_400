// wap to print left digonal element of matrix.
#include <stdio.h>
void main()
{
    int r, c;
    printf("enter row for matrix : ");
    scanf("%d", &r);
    printf("enter column for matrix : ");
    scanf("%d", &c);
    int mat[r][c];
    int i, j;
    printf("enter matrix element : \n");
    for (i = 0; i < r; i++) // 3
    {
        for (j = 0; j < c; j++) // 0
        {
            printf("enter matrix element mat[%d][%d] : ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("matrix elements : \n");
    for (i = 0; i < r; i++) // 3
    {
        for (j = 0; j < c; j++) // 0
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    if (r == c)
    {
        printf("left digonal matrix elements : \n");
        for (i = 0; i < r; i++) // 3
        {
            for (j = 0; j < c; j++) // 0
            {
                if (i == j)
                {
                    printf("%d ", mat[i][j]);
                }
                else
                {
                    printf("0 ");
                }
            }
            printf("\n");
        }
    }
    else
    {
        printf("this matrix is not square matrix");
    }
}