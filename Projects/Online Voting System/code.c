#include<stdio.h>
#define size 4

char candidates[size][10] = {"TMC", "BJP", "CPI(M)", "NO_ONE"};
int votes[size] = {0, 0, 0, 0};

int main() {
	int choice;
	char another;
	printf("Online Voting System\n");
	
    for(int i = 0; i < size; i++) {
        printf("%d. %s\n", (i + 1), candidates[i]);
    }
    
    do {
    	printf("\nEnter the Number to Vote : ");
	    scanf("%d", &choice);
	    
	    switch(choice) {
	    	case 1:
	    		votes[0] += 1;
	    		break;
	    	case 2:
	    		votes[1] += 1;
	    		break;
	    	case 3:
	    		votes[2] += 1;
	    		break;
	    	default:
	    		votes[3] += 1;
		}
		
		printf("Is there any next person ? (Y/N) : ");
		scanf(" %c", &another);
	}while(another == 'Y' || another == 'y');
	
	printf("\nTotal Votes of Every Candidate\n\n");
	
	for(int i = 0; i < size; i++) {
		printf("%s = %d\n", candidates[i], votes[i]);
	}

    return 0;
}