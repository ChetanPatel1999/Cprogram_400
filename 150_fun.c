// no return type but with parameter.
#include <stdio.h>
void add(int a, int b)
{
    int c;
    c = a + b;
    printf("sum = %d\n", c);
}
// make a function to find cube of number
void cube(int num)
{
    int cube;
    cube = num * num * num;
    printf("cube of %d = %d\n", num, cube);
}

// char or vovel check
void char_vovel(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("char is vovel\n");
    }
    else
    {
        printf("char is consonenet\n");
    }
}
void main()
{
    char_vovel('o');

    cube(4);
    add(12, 8);
    add(6, 4);

    add(100, 423);
}