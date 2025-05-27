#include <stdio.h>
void main()
{
    int ans;
    // ans = 12 > 7 && 5 == 5 && 7 > 88;
    // ans = 12 > 77 || 5 == 57 || 77 > 400;
    // ans = !(12 > 77 || 5 == 57 || 77 > 400);
    ans = !(12 > 77 || !(5 == 57) || 77 > 400);
    printf("ans : %d", ans);
}