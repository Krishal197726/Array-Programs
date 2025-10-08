#include <stdio.h>
#include <conio.h>
int main ()
{
int num;
int *ptr;

ptr = &num;



printf ("give a value you want to assign to variable");
scanf ("%d",ptr);
printf ("the value of number in pointer is %d\n",*ptr);


return 0;
}
