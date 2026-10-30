#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const char *choice_name(int choice)
{
    switch (choice) {
        case 1:
            return "rock";
        case 2:
            return "paper";
        case 3:
            return "scissors";
        default:
            return "unknown";
    }
}

int main(void)
{
    int player;

    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");
    printf("Choose an option: ");

    if (scanf("%d", &player) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (player < 1 || player > 3) {
        printf("Please choose 1, 2, or 3.\n");
        return 1;
    }

    srand((unsigned int)time(NULL));
    int computer = rand() % 3 + 1;

    printf("You chose %s.\n", choice_name(player));
    printf("Computer chose %s.\n", choice_name(computer));

    if (player == computer) {
        printf("It's a tie!\n");
    } else if (
        (player == 1 && computer == 3) ||
        (player == 2 && computer == 1) ||
        (player == 3 && computer == 2)
    ) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }

    return 0;
}