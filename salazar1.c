

#include <stdio.h>

int main() {
    int firstNumber, secondNumber, choose;
    float total1, total2, total3, total4;

    printf("Enter first number: ");
    scanf("%d", &firstNumber);

    printf("Enter second number: ");
    scanf("%d", &secondNumber);

    total1 = firstNumber + secondNumber;
    total2 = firstNumber - secondNumber;
    total3 = firstNumber * secondNumber;

    printf("\n1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter choice (1-4): ");
    scanf("%d", &choose);

    switch (choose) {
        case 1:
            printf("Addition: %.2f\n", total1);
            break;

        case 2:
            printf("Subtraction: %.2f\n", total2);
            break;

        case 3:
            printf("Multiplication: %.2f\n", total3);
            break;

        case 4:
            if (secondNumber != 0) {
                total4 = (float) firstNumber / secondNumber;
                printf("Division: %.2f\n", total4);
            } else {
                printf("Error: Cannot divide by zero.\n");
            }
            break;

        default:
            printf("Invalid operation!\n");
    }

    return 0;
}
