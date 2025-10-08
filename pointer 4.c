#include <stdio.h>
#include <conio.h>
int main ()
{
    int a=10;
    int b=20;
    int *ptr1;
    int *ptr2;
    int temp;

    ptr1 = &a;
    ptr2 = &b;

    printf ("the initial first value is %d\n",*ptr1);
    printf ("the initial first value is %d\n",*ptr2);

    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;

    printf ("after swapping a=%d\n, b=%d\n",*ptr1,*ptr2);
    return 0;

}
