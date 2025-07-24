// typedef is used to change name of data type temprarry inside program.
#include <stdio.h>
typedef long long int lli;
typedef long double ld;
struct student_of_10_class_section_a
{
    int rno;
    float per;
};
typedef struct student_of_10_class_section_a s10a;
void main()
{
    s10a s1;
    int a;
    lli b;
    short int c;
    ld d;
    printf("size of int = %d\n", sizeof(a));
    printf("size of long long int = %d\n", sizeof(b));
    printf("size of short int = %d\n", sizeof(c));
    printf("size of long double = %d\n", sizeof(d));
    printf("size of s1 = %d\n", sizeof(s1));
}