#include <stdio.h>

#define NUM_STUDENTS 5

int main() {
    // Define parallel arrays for student data
    int studentIds[NUM_STUDENTS] = {101, 102, 103, 104, 105};
    char genders[NUM_STUDENTS] = {'M', 'F', 'M', 'F', 'M'};


    // For each student there is 3 grades
    int grades[NUM_STUDENTS][3] = {
        {85, 90, 92},   // Grades for student 101
        {78, 82, 80},   // Grades for student 102
        {90, 95, 88},   // Grades for student 103
        {70, 75, 72},   // Grades for student 104
        {88, 92, 90}    // Grades for student 105
    };

    // Calculate and display average grades for each student
    printf("Student ID\tGender\t\tAverage Grade\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            sum += grades[i][j];
        }
        double avg = (double)sum / 3;
        printf("%d\t\t%c\t\t%.2lf\n", studentIds[i], genders[i], avg);
    }

    // Search for student average grade or gender by ID
    int searchId;
    printf("\nEnter student ID to search: ");
    scanf("%d", &searchId);

    int index = -1;
    for (int i = 0; i < NUM_STUDENTS; i++) {
        if (studentIds[i] == searchId) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        printf("Student ID: %d\nGender: %c\n", studentIds[index], genders[index]);
        double avg = 0;
        for (int j = 0; j < 3; j++) {
            avg += grades[index][j];
        }
        avg /= 3;
        printf("Average Grade: %.2lf\n", avg);
    } else {
        printf("Student not found.\n");
    }

    return 0;
}
