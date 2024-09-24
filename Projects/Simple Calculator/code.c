#include<stdio.h>

void getCalculation(char choice, int num1, int num2) {
    int result;
    switch(choice) {
        case '+':
            result = num1 + num2;
            printf("\nResult of Addition : %d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("\nResult of Subtraction : %d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("\nResult of Multiplication : %d\n", result);
            break;
        case '%':
            if(num2 != 0) {
                result = num1 % num2;
                printf("\nResult of Modulo : %d\n", result);
            } else {
                printf("\nError: Division by zero\n");
            }
            break;
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
                printf("\nResult of Division : %d\n", result);
            } else {
                printf("\nError: Division by zero\n");
            }
            break;
        default:
            printf("\nInvalid choice\n");
            break;
    }
}

int main() {
    int num1, num2;
    char choice;

    printf("Simple Calculator\n");
    printf("__________________\n");
    printf("\n1. Addition : +\n");
    printf("2. Subtraction : -\n");
    printf("3. Multiplication : *\n");
    printf("4. Modulo : %\n");
    printf("4. Division : /\n");
    printf("__________________\n");

    printf("\nEnter your choice: ");
    scanf("%c", &choice);

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    getCalculation(choice, num1, num2);

    return 0;
}