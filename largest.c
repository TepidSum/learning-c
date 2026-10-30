#include <stdio.h>

int main(void)
{
    double first;
    double second;
    double third;
    double largest;

    printf("Enter three numbers separated by spaces: ");

    if (scanf("%lf %lf %lf", &first, &second, &third) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    largest = first;

    if (second > largest) {
        largest = second;
    }

    if (third > largest) {
        largest = third;
    }

    printf("Largest: %.2f\n", largest);

    return 0;
}