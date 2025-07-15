// matrix
#include <stdio.h>
void main()
{
    int r, c;
    printf("enter row for matrix : ");
    scanf("%d", &r); // 3
    printf("enter column for matrix : ");
    scanf("%d", &c); // 3
    int mat1[r][c], mat2[r][c], mat3[r][c];
    int i, j;
    printf("enter matrix1 elements : \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("enter element mat[%d][%d] : ", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("enter matrix2 elements : \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("enter element mat[%d][%d] : ", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
        }
    }
    printf("matrix1 element are : \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }
    printf("matrix2 element are : \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }

    // sum two matrix

    for (i = 0; i < r; i++)//1
    {
        for (j = 0; j < c; j++)//1
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("matrix3 element are : \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }
}