#include <stdio.h>
#include <conio.h>
int main ()
{
     int i,amount,a,b;
     int notes[]={500,200,100,50,20,10,5,2,1};
     int notesCount[9];
     printf ("enter the amount");
     scanf ("%d",amount);
     for (i=0;i<8;i++)
     {
      for (i=0;i<8;i++)
        {
            a=amount/notes[i];
            notesCount[i]=a;
            b=amount%notes[i];
            amount=b;
           // printf ("%d",notesCount[i]);
           printf ("%d\t%d\t",a,b);

        }

     }


return 0;
     }


