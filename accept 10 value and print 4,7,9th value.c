#include <stdio.h>
#include <conio.h>
int main ()
{
    int value[9];
    int i;

    printf ("enter 10 values:\n");
    for (i=0;i<10;i++)
    {
        printf ("value no: %d",i+1);
        scanf ("%d",&value[i]);
    }
    printf ("%d\n",value[3]);
      printf ("%d\n",value[6]);
      printf ("%d\n",value[8]);
 return 0;
}
