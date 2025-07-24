#include <stdio.h>
#include <string.h>
struct pen
{
    char name[20];
    int price;
    float rating;
};
void above_5_pen(struct pen p[], int n)
{
    int i;
    printf("above 5 rs pen ...\n");
    for (i = 0; i < n; i++)
    {
        if (p[i].price > 5)
        {
            printf("pen name = %s\n", p[i].name);
        }
    }
}
void main()
{
    struct pen p[3];
    int i;
    for (i = 0; i < 3; i++) // 1
    {
        printf("enter pen%d info : \n", i + 1);
        printf("enter pen name : ");
        scanf("%s", p[i].name);
        printf("enter pen price : ");
        scanf("%d", &p[i].price);
        printf("enter pen rating : ");
        scanf("%f", &p[i].rating);
    }

    for (i = 0; i < 3; i++)
    {
        printf("pen%d info... \n", i + 1);
        printf("pen name = %s\n", p[i].name);
        printf("pen price = %d\n", p[i].price);
        printf("pen rating = %.1f\n", p[i].rating);
        printf("------------------------------------\n");
    }

    // display above 5 rs pen
    above_5_pen(p, 3);
}