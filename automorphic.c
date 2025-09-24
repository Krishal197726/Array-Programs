#include <stdio.h>
#include <math.h>

int isAutomorphic(int num)
{
    int square = num * num;
    int num_digits;
    if (num == 0)
        {
        num_digits = 1;
        } else {
        num_digits = (int)log10(num) + 1;
    }

    int last_digits_of_square = square % (int)pow(10, num_digits);
    if (last_digits_of_square == num) {
        return 1;
    } else
    {
        return 0;
    }
}

int main()
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (isAutomorphic(number))
        {
        printf("%d is an Automorphic number.\n", number);
        }
    else
        {
        printf("%d is not an Automorphic number.\n", number);
        }

    return 0;
}
