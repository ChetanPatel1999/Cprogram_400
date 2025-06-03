// club mini project
#include <stdio.h>
void main()
{
    int age, num, t;
    printf("enter your age : ");
    scanf("%d", &age); // 17
    if (age >= 18)
    {
        printf("welcome to my club ! \n");
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
            printf("your noodles is ordered please pay 120 rs");
            break;
        case 2:
            printf("choose sandwitch type ----\n");
            printf("---------------------------\n");
            printf("1. masala sandwitch\n");
            printf("2. chiz chatuny sandwitch\n");
            printf("3. paneer sandwitch\n");
            printf("choose any option : ");
            scanf("%d", &t);
            if (t == 1)
            {
                printf("your masala sandwitch is orderd please pay 150 rs\n");
            }
            else if (t == 2)
            {
                printf("your chiz chatuny sandwitch is orderd please pay 150 rs\n");
            }
            else if (t == 3)
            {
                printf("your paneer sandwitch is orderd please pay 150 rs\n");
            }
            else
            {
                printf("you choose wrong option");
            }
            break;
        case 3:
            printf("your cold coffi is ordered please pay 100 rs");
            break;
        default:
            printf("you choose wrong option");
        }
    }
    else
    {
        printf("you are not adult please try after %d year", 18 - age);
    }
}