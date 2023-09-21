#include <stdio.h>

int factorial_recurs(int number);
int factorial_nonRecurs(int number);

void main() {
    int isContinue = 1, fact = 1, number, choice;

    while (isContinue == 1) {
        printf("Which function do you want to use (1, 2) 1. Recursive, 2. Non-Recursive:\n ");
        scanf("%d", &choice);
        printf("Enter a number to find the factorial of:\n ");
        scanf("%d", &number);

        if (choice == 1) {
            fact = factorial_recurs(number);
            printf("Factorial is: %d\n", fact);
        } else {
            fact = factorial_nonRecurs(number);
            printf("Factorial is: %d\n", fact);
        }

        printf("Do you want to try another number? (1 for Yes, 0 for No): ");
        scanf("%d", &isContinue);
    }
}

int factorial_nonRecurs(int number) {
    int fact = 1;
    for (int i = 1; i <= number; i++) {
        fact = fact * i;
    }
    return fact;
}

int factorial_recurs(int number) {
    if (number >= 1) {
        return number * factorial_recurs(number - 1);
    } else {
        return 1;
    }
}
