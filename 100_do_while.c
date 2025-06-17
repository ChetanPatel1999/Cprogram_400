// club mini project
#include <stdio.h>
void main()
{
    int age, num, p,c, total_bill = 0, r = 0, s = 0, t = 0;
    printf("enter your age : ");
    scanf("%d", &age); // 17
    if (age >= 18)
    {
        printf("welcome to my club ! \n");
        do
        {

            printf("club menu -----\n");
            printf("-------------------\n");
            printf("1. noodles : 120\n");
            printf("2. sandwitch : 150\n");
            printf("3. cold coffi : 100\n");
            printf("choose any option : ");
            scanf("%d", &num);
            switch (num)
            {
            case 1:
                printf("enter qunatity : ");
                scanf("%d",&c);
                printf("your noodles is ordered.\n");
                total_bill = total_bill + c*120;
                r=r+c;
                break;
            case 2:
                printf("your sandwitch is orderd .\n");
                total_bill = total_bill + 150;
                s++;
                break;
            case 3:
                printf("your cold coffi is ordered .\n");
                total_bill = total_bill + 100;
                t++;
                break;
            default:
                printf("you choose wrong option");
            }

            printf("you want to order some thing more press 1 : ");
            scanf("%d", &p);
        } while (p == 1);
        printf("                 your bill sir/mem %c\n", 2);
        printf("--------------------------------------------------------\n");
        printf("    item           Quantity      price        total \n");
        printf("    noodles          %d            120          %d\n", r, r * 120);
        printf("    sandwith         %d            150          %d\n", s, s * 150);
        printf("    coffi            %d            100          %d\n", t, t * 100);
        printf("---------------------------------------------------------\n");
        printf("                   total bill : %d \n", total_bill);
        printf("---------------------------------------------------------\n");
        printf("------------------%c thanks for visiting %c ---------------\n",3,3);
    }
    else
    {
        printf("you are not adult please try after %d year", 18 - age);
    }
}