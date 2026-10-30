#include <stdio.h>

int is_prime(int number)
{
    if (number < 2) {
        return 0;
    }

    for (int divisor = 2; divisor <= number / divisor; divisor++) {
        if (number % divisor == 0) {
            return 0;
        }
    }

    return 1;
}

int main(void)
{
    int number;

    printf("Enter an integer: ");

    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (is_prime(number)) {
        printf("%d is prime.\n", number);
    } else {
        printf("%d is not prime.\n", number);
    }

    return 0;
}