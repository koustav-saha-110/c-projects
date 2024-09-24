#include<stdio.h>

void convertTemperature(int choice) {
    float f, c, k;

    switch(choice) {
        case 1:
            printf("Enter the temperature in Fahrenheit: ");
            scanf("%f", &f);
            c = (f - 32) * 5/9;
            printf("The temperature in Celsius is: %f", c);
            break;
        case 2:
            printf("Enter the temperature in Fahrenheit: ");
            scanf("%f", &f);
            k = (f - 32) * 5/9 + 273.15;
            printf("The temperature in Kelvin is: %f", k);
            break;
        case 3:
            printf("Enter the temperature in Celsius: ");
            scanf("%f", &c);
            f = c * 9/5 + 32;
            printf("The temperature in Fahrenheit is: %f", f);
            break;
        case 4:
            printf("Enter the temperature in Celsius: ");
            scanf("%f", &c);
            k = c + 273.15;
            printf("The temperature in Kelvin is: %f", k);
            break;
        case 5:
            printf("Enter the temperature in Kelvin: ");
            scanf("%f", &k);
            f = (k - 273.15) * 9/5 + 32;
            printf("The temperature in Fahrenheit is: %f", f);
            break;
        case 6:
            printf("Enter the temperature in Kelvin: ");
            scanf("%f", &k);
            c = k - 273.15;
            printf("The temperature in Celsius is: %f", c);
            break;
        default:
            printf("Invalid choice");
            break;
    }
}

int main() {
    int choice;

    printf("Temperature Converter\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Fahrenheit to Kelvin\n");
    printf("3. Celsius to Fahrenheit\n");
    printf("4. Celsius to Kelvin\n");
    printf("5. Kelvin to Fahrenheit\n");
    printf("6. Kelvin to Celsius\n");
    
    printf("Enter your choice: ");
    scanf("%d", &choice);

    convertTemperature(choice);

    return 0;
}