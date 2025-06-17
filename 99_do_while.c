#include <stdio.h>
void main()
{
    int total_amount = 20000, d_ammount = 0;
    int emp_sal, p;
    printf("       sallary distribute app :\n");
    printf("         total amount :%d\n", total_amount);
    printf("--------------------------------------\n");
    do
    {
        printf("enter emp sal : ");
        scanf("%d", &emp_sal);
        d_ammount = d_ammount + emp_sal;
        if (d_ammount < total_amount)
        {
            printf("\n sallary distribute success fully\n\n");
        }
        else
        {
            d_ammount = d_ammount - emp_sal;
            printf("\ninsuffician belance \n");
            printf("you have only : %d rs amount\n\n", total_amount - d_ammount);
        }
        printf("if you want distribute more sallaray so press 1 :");
        scanf("%d", &p);
    } while (p == 1);

    printf("--------------------------------------\n");
    printf(" distributed ammount : %d\n", d_ammount);
    printf(" reamainig ammount : %d\n", total_amount - d_ammount);
}