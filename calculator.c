#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%d", &num2);

    switch (operator) {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%d / %d = %f\n", num1, num2, (float)num1 / num2);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Error! Operator is not correct.\n");
            break;
    }

    return 0;
}
