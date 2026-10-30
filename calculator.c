#include <stdio.h>

int main(void)
{
    double first;
    double second;
    double result;
    char operation;

    printf("Enter a calculation, such as 8 * 3: ");

    if (scanf("%lf %c %lf", &first, &operation, &second) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    switch (operation) {
        case '+':
            result = first + second;
            break;

        case '-':
            result = first - second;
            break;

        case '*':
            result = first * second;
            break;

        case '/':
            if (second == 0.0) {
                printf("Cannot divide by zero.\n");
                return 1;
            }

            result = first / second;
            break;

        default:
            printf("Unknown operator. Use +, -, *, or /.\n");
            return 1;
    }

    printf("Result: %.2f\n", result);

    return 0;
}