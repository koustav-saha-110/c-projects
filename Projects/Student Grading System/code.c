#include<stdio.h>
#define MAX_STUDENTS 100
#define MAX_SUBJECTS 10

char stdName[MAX_STUDENTS][50];
int stdRoll[MAX_STUDENTS];
float stdMarks[MAX_STUDENTS][MAX_SUBJECTS];
float stdTotalMarks[MAX_STUDENTS];
char stdGrades[MAX_STUDENTS];

void getAllStdNamesAndMarks(int numberOfStudents, int numberOfSubjects) {
    for (int i = 0; i < numberOfStudents; i++) {
        printf("\nEnter the First Name of the Student : ");
        scanf("%s", &stdName[i]);
        
		printf("\n");
        
        printf("Enter the Roll Number : ");
        scanf("%d", &stdRoll[i]);

        for (int j = 0; j < numberOfSubjects; j++) {
            printf("Enter the %d Subject Marks : ", (j + 1));
            scanf("%f", &stdMarks[i][j]);
        }

        printf("\n");
    }
}

void calulateStudentMarks(int numberOfStudents, int numberOfSubjects, int tMarks) {
    for (int i = 0; i < numberOfStudents; i++) {
    	int result = 0;
        float sum = 0;
        for (int j = 0; j < numberOfSubjects; j++) {
            sum += stdMarks[i][j];
        }
		stdTotalMarks[i] = sum;
        result = (sum/tMarks) * 100;
        
        if (result > 90) {
        	stdGrades[i] = 'A';
		} else if (result > 80 && result <= 90) {
        	stdGrades[i] = 'B';
		} else if (result > 60 && result <= 80) {
			stdGrades[i] = 'C';
		} else if (result > 40 && result <= 60) {
			stdGrades[i] = 'D';
		} else {
			stdGrades[i] = 'F';
		}
    }
    
    printf("\n");
}

void showStudentMarks(int numberOfStudents, int numberOfSubjects) {
	printf("-- Result --\n\n");
	for (int i = 0; i < numberOfStudents; i++) {
		printf("Name =  %s, Roll No = %d, Total Marks = %.f, Grade = %c\n", stdName[i], stdRoll[i], stdTotalMarks[i], stdGrades[i]);
	}
}

void getAllInputs() {
    int numberOfStudents, numberOfSubjects, fMarks, tMarks;
    
    printf("Enter the Number Total Students : ");
    scanf("%d", &numberOfStudents);

    printf("Enter the Number of Total Subjects : ");
    scanf("%d", &numberOfSubjects);
    
	printf("Enter the Full Marks : ");
    scanf("%d", &fMarks);
    
    tMarks = fMarks * numberOfSubjects;

    getAllStdNamesAndMarks(numberOfStudents, numberOfSubjects);
    calulateStudentMarks(numberOfStudents, numberOfSubjects, tMarks);
    showStudentMarks(numberOfStudents, numberOfSubjects);
}

int main() {
    printf("Student Grading System\n");
    printf("----------------------\n");

    getAllInputs();
    return 0;
}