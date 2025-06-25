// nested loops
// 5 4 3 2 1
// 4 3 2 1
// 3 2 1
// 2 1
// 1
#include <stdio.h>
void main()
{
    int i, j;
    for (i = 5; i >= 1; i--) // i=2
    {
        for (j = i; j >= 1; j--) // 5 4 3 2 1
        {                        // 4 3 2 1
            printf("%d ", j);    // 3 2 1
        }                        // 2 1
        printf("\n");            // 1
    }
}