#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void player_vs_player() {
    char another;
    char player1Name[100], player2Name[100];
    char player1Choice, player2Choice;

    printf("Enter Player 1's name: ");
    scanf("%s", player1Name);  // Fixed the incorrect &player1Name
    
    printf("\n");

    printf("Enter Player 2's name: ");
    scanf("%s", player2Name);

    do {
        printf("%s, enter your choice (R, P, S): ", player1Name);
        scanf(" %c", &player1Choice);
        printf("%s, enter your choice (R, P, S): ", player2Name);
        scanf(" %c", &player2Choice);

        printf("%s chose %c\n", player1Name, player1Choice);
        printf("%s chose %c\n", player2Name, player2Choice);

        if (player1Choice == player2Choice) {
            printf("It's a tie!\n");
        } else if ((player1Choice == 'R' && player2Choice == 'S') ||
                   (player1Choice == 'P' && player2Choice == 'R') ||
                   (player1Choice == 'S' && player2Choice == 'P')) {
            printf("%s wins!\n", player1Name);
        } else {
            printf("%s wins!\n", player2Name);
        }

        printf("\n");
        printf("Do you want to play again? (Y / N): ");
        scanf(" %c", &another);
    } while(another == 'Y' || another == 'y');
}

void player_vs_computer() {
    char another;
    char playerName[100];
    int playerChoice, computerChoice;

    printf("Enter your name: ");
    scanf("%s", playerName);

    do {
        printf("%s, enter your choice (1(R), 2(P), 3(S)): ", playerName);
        scanf("%d", &playerChoice);
        printf("\n");

        srand(time(0));
        computerChoice = rand() % 3 + 1;

        printf("%s chose %d\n", playerName, playerChoice);
        printf("Computer chose %d\n", computerChoice);

        if (playerChoice == computerChoice) {
            printf("It's a tie!\n");
        } else if ((playerChoice == 1 && computerChoice == 3) ||
                   (playerChoice == 2 && computerChoice == 1) ||
                   (playerChoice == 3 && computerChoice == 2)) {
            printf("%s wins!\n", playerName);
        } else {
            printf("Computer wins!\n");
        }

        printf("Do you want to play again? (Y / N): ");
        scanf(" %c", &another);
    } while(another == 'Y' || another == 'y');
}

int main() {
    int gameChoice;

    printf("Welcome to Rock, Paper, Scissors!\n");
    printf("-----------------------------------\n");
    printf("Select the Mode: \n");
    printf("1. Player vs Player\n");
    printf("2. Player vs Computer\n");
    printf("Enter your choice: ");
    scanf("%d", &gameChoice);

    if (gameChoice == 1) {
        player_vs_player();
    } else if (gameChoice == 2) {
        player_vs_computer();
    } else {
        printf("Invalid choice. Please enter 1 or 2.\n");
    }

    return 0;
}
