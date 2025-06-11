#include <stdio.h>
void main()
{
    float v1, v2, x1, x2;
    printf("enter a v1 : ");
    scanf("%f", &v1);
    printf("enter a v2 : ");
    scanf("%f", &v2);
    x1 = (v2 * 100) / v1;
    x2 = (v1 * 100) / v2;
    printf("%.1f is %.1f per of %.1f\n", v2, x1, v1);
    printf("%.1f is %.1f per of %.1f\n", v1, x2, v2);
}