#include <stdio.h>
#include <conio.h>
int main ()
{
    int digit,num,reverse=0;
    printf ("enter a number:");
    scanf ("%d",num);
    num=reverse;
    while (num>0)
    {
        digit = num%10;
        num = num/10;
        reverse = reverse*10+digit;
    }
    if (num==reverse)
    {
        printf ("%d the given no. is palindrome",num);
    }
    else
    {
        printf("%d it is not palindrome",num);
    }
    return 0;
}
