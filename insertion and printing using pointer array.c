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
    printf ("all the values of array using pointer\n");
    p=a;
    for (i=0;i<5;i++)
    {
        printf ("%d\n",*p);
        p++;
    }
    return 0;
}
