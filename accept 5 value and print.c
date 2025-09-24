#include <stdio.h>

int main() {
    int values[4];
    int i;

    printf("Enter 5 integer values:\n");
    for (i = 0; i < 5; i++)
     {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &values[i]);
    }

    for (i = 0; i < 5; i++) {
        printf("Value %d: %d\n", i + 1, values[i]);
    }

    return 0;
}
