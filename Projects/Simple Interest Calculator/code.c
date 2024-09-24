#include<stdio.h>

int simpleInterest() {
    int principal, rate, time, simple_interest;
    
    printf("\nEnter the principal amount: ");
    scanf("%d", &principal);
    
    printf("Enter the rate of interest: ");
    scanf("%d", &rate);
    
    printf("Enter the time period: ");
    scanf("%d", &time);
    
    simple_interest = (principal * rate * time) / 100;

    return simple_interest;
}

int main() {
    int result;

    printf("Simple Interest Calculator\n");
    printf("--------------------------\n");

    result = simpleInterest();
    printf("\nSimple Interest: %d", result);

    return 0;
}