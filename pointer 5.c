#include <stdio.h>
#include <conio.h>
int main ()
{
    int a[4],*p,i;
    p = a;
    printf ("enter 5 diffrent values\n");
    for (i=0;i<5;i++)
    {
        scanf("%d",p);
        p++;
    }
    printf ("the third element of array is %d\n",*(p+4));

    return 0;
}
