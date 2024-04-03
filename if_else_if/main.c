#include <stdio.h>

int main() {
    int grade;

    // Prompting the user to enter the grade
    printf("Enter the grade (0-100): ");
    scanf("%d", &grade);

    // Multiple alternative decision based on the grade
    if (grade >= 90 && grade <= 100) {
        printf("Grade: A\n");
    } else if (grade >= 80 && grade < 90) {
        printf("Grade: B\n");
    } else if (grade >= 70 && grade < 80) {
        printf("Grade: C\n");
    } else if (grade >= 60 && grade < 70) {
        printf("Grade: D\n");
    } else if (grade >= 0 && grade < 60) {
        printf("Grade: F\n");
    } else {
        printf("Invalid grade entered!\n");
    }

    return 0;
}
