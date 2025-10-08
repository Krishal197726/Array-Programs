#include <stdio.h>
#include <conio.h>
int main ()
{
int num= 50;
int *ptr;

ptr = &num;

printf ("the value of number in pointer at first is %d\n",*ptr);

*ptr=100;

printf ("the value of number after change is %d\n",*ptr);
return 0;
}
