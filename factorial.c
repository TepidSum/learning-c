#include <stdio.h>

unsigned long long factorial(int number)
{
    unsigned long long result = 1;

    for (int i = 2; i <= number; i++) {
        result *= i;
    }

    return result;
}

int main(void)
{
    int number;

    printf("Enter an integer from 0 to 20: ");

    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (number < 0 || number > 20) {
        printf("Please choose a number from 0 to 20.\n");
        return 1;
    }

    printf("%d! = %llu\n", number, factorial(number));

    return 0;
}