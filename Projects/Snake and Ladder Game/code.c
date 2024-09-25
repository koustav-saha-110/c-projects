#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void player_vs_player() {
    srand(time(0));

    int turn = 0, choice;
    int player1_position = 0, player2_position = 0;
    char player1[100], player2[100];
    printf("Player 1's name : ");
    scanf("%s", player1);
    printf("Player 2's name : ");
    scanf("%s", player2);

    do {
        if(turn == 0) {
            printf("\n%s's turn\n", player1);
            printf("Press any number to roll the dice : ");
            scanf("%d", &choice);

            if(player1_position == 0) {
                int dice;
				dice = rand() % 6 + 1;
                if (dice == 1) {
                    printf("Congo you got 1\n");
                    player1_position += 1;
                } else {
                    printf("OOps, You got %d, wait for the next turn\n", dice);
                }
            } else {
                int value = rand() % 6 + 1;
                printf("\n%s's' dice value %d\n", player1, value);
                player1_position += value;
            }
        } else {
            printf("\n%s's turn\n", player2);
            printf("Press any number to roll the dice : ");
            scanf("%d", &choice);

            if(player2_position == 0) {
                int dice;
				dice = rand() % 6 + 1;
                if (dice == 1) {
                    printf("Congo you got 1\n");
                    player2_position += 1;
                } else {
                    printf("OOps, You got %d, wait for the next turn\n", dice);
                }
            } else {
                int value = rand() % 6 + 1;
                printf("\n%s's' dice value %d\n", player2, value);
                player2_position += value;
            }
        }

        printf("\n%s's position : %d\n", player1, player1_position);
        printf("%s's position : %d\n", player2, player2_position);
        
        if(turn == 0) {
        	turn = 1;
		} else {
			turn = 0;
		}
		
		printf("\n------------\n");
    } while(player1_position <= 100 && player2_position <= 100);

    if(player1_position > player2_position) {
        printf("\n%s is the winner\n", player1);
    } else if(player2_position > player1_position) {
        printf("\n%s is the winner\n", player2);
    } else {
        printf("Game is draw\n");
    }
}

void player_vs_computer() {
	srand(time(0));

    int turn = 0, choice;
    int player_position = 0, computer_position = 0;
    char player[100];
    printf("Player's name : ");
    scanf("%s", player);

    do {
        if(turn == 0) {
            printf("\n%s's turn\n", player);
            printf("Press any number to roll the dice : ");
            scanf("%d", &choice);

            if(player_position == 0) {
                int dice;
				dice = rand() % 6 + 1;
                if (dice == 1) {
                    printf("Congo you got 1\n");
                    player_position += 1;
                } else {
                    printf("OOps, You got %d, wait for the next turn\n", dice);
                }
            } else {
                int value = rand() % 6 + 1;
                printf("\n%s's dice value %d\n", player, value);
                player_position += value;
            }
        } else {
            printf("\nComputer's turn\n");
            printf("Press any number to roll the dice : ");
            scanf("%d", &choice);

            if(computer_position == 0) {
                int dice;
				dice = rand() % 6 + 1;
                if (dice == 1) {
                    printf("Congo you got 1\n");
                    computer_position += 1;
                } else {
                    printf("OOps, You got %d, wait for the next turn\n", dice);
                }
            } else {
                int value = rand() % 6 + 1;
                printf("\nComputer's dice value %d\n", value);
                computer_position += value;
            }
        }

        printf("\n%s's position : %d\n", player, player_position);
        printf("Computer's position : %d\n", computer_position);
        
        if(turn == 0) {
        	turn = 1;
		} else {
			turn = 0;
		}
		
		printf("\n------------\n");
    } while(player_position <= 100 && computer_position <= 100);

    if(player_position > computer_position) {
        printf("\n%s is the winner\n", player);
    } else if(computer_position > player_position) {
        printf("\nComputer is the winner\n");
    } else {
        printf("Game is draw\n");
    }
}

int main() {
    int choice;

    printf("Welcome to the Snake and Ladder Game\n");
    printf("1. Player vs Player\n");
    printf("2. Player vs Computer\n");

    printf("Enter your choice : ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            player_vs_player();
            break;
        case 2:
            player_vs_computer();
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}