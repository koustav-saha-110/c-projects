#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int attempts = 0, randNumber, guessNumber;
    
    srand(time(0));
    randNumber = rand() % 20 + 1;
    
    printf("Guess the number between 1 and 20\n");
    do {
        printf("Enter your guess: ");
        scanf("%d", &guessNumber);
        attempts++;
        
        if(guessNumber > randNumber) {
            printf("Too high! Try again.\n");
        } else if(guessNumber < randNumber) {
            printf("Too low! Try again.\n");
        }
    } while(guessNumber != randNumber);

    printf("\nCongratulations! You guessed the number in %d attempts.\n", attempts);
    return 0;
}
