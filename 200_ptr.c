// when we increse pointer value by one  so its value is
// increased by 4 if pointer type is integer.
#include <stdio.h>
void main()
{
    int a = 12;
    int *ptr;
    ptr = &a;
    printf("value of a = %d\n", a);           // 12
    printf("address of a = %d\n", &a);        // 6487572
    printf("address of a by ptr= %d\n", ptr); // 6487572
    ptr++;
    printf("address of a = %d\n", &a);        // 6487572
    printf("address of a by ptr= %d\n", ptr); // 6487576
}