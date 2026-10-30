#include <stdio.h>

unsigned int gcd(unsigned int first, unsigned int second)
{
    while (second != 0) {
        unsigned int remainder = first % second;
        first = second;
        second = remainder;
    }

    return first;
}

int main(void)
{
    int first;
    int second;

    printf("Enter two nonnegative integers: ");

    if (scanf("%d %d", &first, &second) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    if (first < 0 || second < 0) {
        printf("Both numbers must be nonnegative.\n");
        return 1;
    }

    if (first == 0 && second == 0) {
        printf("At least one number must be greater than zero.\n");
        return 1;
    }

    printf("GCD: %u\n", gcd((unsigned int)first, (unsigned int)second));

    return 0;
}