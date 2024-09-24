#include<stdio.h>

int main() {
    float amount, convertedAmount;
    int choice;
    
    printf("Enter amount in INR: ");
    scanf("%f", &amount);
    
    printf("Choose currency to convert to:\n");
    printf("1. USD\n2. EUR\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            convertedAmount = amount / 73.65;
            printf("Amount in USD: %.2f\n", convertedAmount);
            break;
        case 2:
            convertedAmount = amount / 73.65 * 0.85;
            printf("Amount in EUR: %.2f\n", convertedAmount);
            break;
        default:
            printf("Invalid choice!\n");
    }
    
    return 0;
}
