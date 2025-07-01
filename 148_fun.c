#include <stdio.h>
void fun3();
void fun1()
{
    fun3();
    printf("fun1 is called\n");
}
void fun2()
{
    printf("fun2 is called\n");
    fun1();
    printf("hello students\n");
}
void fun3()
{
    printf("fun3 is called\n");
}
void main()
{
    printf("main is called\n");
    fun2();
    printf("end main fun");
}