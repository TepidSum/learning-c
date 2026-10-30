#include <stdio.h>

int main(void)
{
    int choice;
    double temperature;
    double result;

    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Choose an option: ");

    if (scanf("%d", &choice) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (choice != 1 && choice != 2) {
        printf("Invalid option.\n");
        return 1;
    }

    printf("Enter the temperature: ");

    if (scanf("%lf", &temperature) != 1) {
        printf("Invalid temperature.\n");
        return 1;
    }

    if (choice == 1) {
        result = temperature * 9.0 / 5.0 + 32.0;
        printf("%.2f C = %.2f F\n", temperature, result);
    } else {
        result = (temperature - 32.0) * 5.0 / 9.0;
        printf("%.2f F = %.2f C\n", temperature, result);
    }

    return 0;
}