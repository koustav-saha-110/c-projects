#include<stdio.h>

void bmi_calculator(float bmi) {
    printf("Your Body Mass Index is: %f\n", bmi);
    
    if (bmi < 18.5) {
        printf("You are underweight.\n");
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        printf("You are within the normal weight range.\n");
    } else if (bmi >= 25 && bmi <= 29.9) {
        printf("You are overweight.\n");
    } else if (bmi >= 30 && bmi <= 34.9) {
        printf("You are obese.\n");
    } else {
        printf("You are Extremely obese.\n");
    }
}

int main() {
    float weight, height, bmi;

    printf("Enter your weight in KG: ");
    scanf("%f", &weight);

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    bmi = weight / (height * height);
    bmi_calculator(bmi);

    return 0;
}
