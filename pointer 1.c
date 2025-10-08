#include <stdio.h>
#include <conio.h>
int main ()
{
int num= 50;
int *ptr;

ptr = num;

printf ("the value of number in pointer is %d\n",*ptr);
return 0;
}
