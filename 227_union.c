#include <stdio.h>
#include <string.h>
union pen
{
    char name[12];
    int price;
    float rating;
};
void main()
{
    union pen p1;
    printf("size of pen  = %d\n", sizeof(p1));
    
    p1.price = 5;
    p1.rating = 3.5;
    strcpy(p1.name, "cello");

    printf("pen1 info... \n");
    printf("pen name = %s\n", p1.name);
    printf("pen price = %d\n", p1.price);
    printf("pen rating = %.1f\n", p1.rating);
}