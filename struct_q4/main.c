#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 4

struct student {
    char name[20];
    int section;
    float grade;
};

// Function declarations
float raise_grade(float old_grade);
float raise_students(char name[]);

int main() {
    struct student s[MAX_SIZE], temp;

    for (int i = 0; i < MAX_SIZE; i++) {
        printf("Enter the information of student[%d]: ordered by name, section then grade\n", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].section, &s[i].grade);
    }

    // Bubble sort to sort students by grade in descending order
    for (int i = 0; i < MAX_SIZE - 1; i++) {
        for (int j = 0; j < MAX_SIZE - i - 1; j++) {
            if (s[j].grade < s[j + 1].grade) {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    printf("------------------------------------------\n");

    // Print sorted student information
    for (int i = 0; i < MAX_SIZE; i++) {
        printf("Student[%d]: %s %d %.2f\n", i + 1, s[i].name, s[i].section, s[i].grade);
    }

    printf("------------------------------------------\n");

    // Update grades based on raise_students function
    for (int i = 0; i < MAX_SIZE; i++) {
        float raised_grade = raise_students(s[i].name);
        if (raised_grade == 100.0) {
            s[i].grade = raised_grade;
        } else {
            s[i].grade = raise_grade(s[i].grade);
        }
    }

    // Print updated student information
    for (int i = 0; i < MAX_SIZE; i++) {
        printf("Student[%d]: %s %d %.2f\n", i + 1, s[i].name, s[i].section, s[i].grade);
    }

    printf("------------------------------------------\n");
    // Print updated student information
    for (int i = 0; i < MAX_SIZE; i++) {
        printf("Student[%d]: %s %d %.2f\n", i + 1, s[i].name, s[i].section, s[i].grade);
    }

    printf("------------------------------------------\n");

    return 0;
}

// Function definition for raising grade by 5%
float raise_grade(float old_grade) {
    float new_grade = old_grade * 1.05;
    if (new_grade > 100.0) {
        new_grade = 100.0;
    }
    return new_grade;
}

// Function definition for checking if name starts with "AI"
float raise_students(char name[]) {
    if (strncmp(name, "Al", 2) == 0) {
        return 100.0;
    } else {
        return 0.0;
    }
}
