#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter an integer from -1000 to 1000: ");

    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (number < -1000 || number > 1000) {
        printf("Number is out of range.\n");
        return 1;
    }

    for (int i = 1; i <= 12; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}