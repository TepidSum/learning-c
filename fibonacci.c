#include <stdio.h>

int main(void)
{
    int count;
    unsigned long long previous = 0;
    unsigned long long current = 1;

    printf("How many terms? Choose 1 to 94: ");

    if (scanf("%d", &count) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (count < 1 || count > 94) {
        printf("Please choose a number from 1 to 94.\n");
        return 1;
    }

    for (int i = 0; i < count; i++) {
        if (i == 0) {
            printf("%llu", previous);
        } else {
            printf(" %llu", current);

            if (i < count - 1) {
                unsigned long long next = previous + current;
                previous = current;
                current = next;
            }
        }
    }

    printf("\n");

    return 0;
}