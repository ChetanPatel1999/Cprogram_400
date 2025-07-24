//enum :- its is used to make integer constant. using enem we can mange/read
//easily large program for constant values. 
#include<stdio.h>
enum day {mon=12,tue,wed,thu=90,fri,sat,sun};
void main()
{
    printf("mon = %d\n",mon); 
    printf("tue = %d\n",tue); 
    printf("wed = %d\n",wed); 
    printf("thu = %d\n",thu); 
    printf("fri = %d\n",fri); 
    printf("sat = %d\n",sat); 
    printf("sun = %d\n",sun); 
}