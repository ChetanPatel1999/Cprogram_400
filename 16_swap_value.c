// write a program to swap two variable value using third variable.
#include <stdio.h>
void main()
{
  int a, b, c;
  printf("enter a value : ");
  scanf("%d", &a);
  printf("enter b value : ");
  scanf("%d", &b);
  printf("before swapping value : \n");
  printf("a = %d\n", a);
  printf("b = %d\n", b);
  c = a;
  a = b;
  b = c;
  printf("after swapping value : \n");
  printf("a = %d\n", a);
  printf("b = %d\n", b);
}