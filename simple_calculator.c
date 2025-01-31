 #include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    // Prompt user for the first number
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    // Prompt user for the operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Space before %c to handle newline characters

    // Prompt user for the second number
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Perform calculation based on operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator! Please use +, -, *, or /.\n");
    }

    return 0;
}
