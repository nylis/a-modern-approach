#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int inputGrade1, inputGrade2, inputGrade;
    bool execute = true;

    printf("Enter numerical grade: ");
    scanf("%d", &inputGrade);

    if (inputGrade < 0 || inputGrade > 100) {
        printf("ERROR: Grade is larger than 100 or less than 0");
        execute = false;
    }

    if (execute) {
        inputGrade1 = inputGrade / 10;
        inputGrade2 = inputGrade % 10;
        printf("Letter grade: ");
        switch (inputGrade1) {
            case 10: case 9:
                printf("A");
                break;
            case 8:
                printf("B");
                break;
            case 7:
                printf("C");
                break;
            case 6:
                printf("D");
                break;
            case 5: case 4: case 3: case 2: case 1: case 0:
                printf("F");
                break;
        }
    }

    return 0;
}