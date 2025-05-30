// wap to accept percentage of student and check
//  student pass or fail.
#include <stdio.h>
void main()
{
    int s1, s2, s3;
    float per;
    printf("enter math marks : ");
    scanf("%d", &s1);
    printf("enter physics marks : ");
    scanf("%d", &s2);
    printf("enter chemestry marks : ");
    scanf("%d", &s3);
    per = ((s1 + s2 + s3) / 300.0) * 100;
    printf("student result ...\n");
    printf("student per : %.2f\n", per);
    if (per >= 33)
    {
        printf("student pass");
    }
    else
    {
        printf("student Fail");
    }
}