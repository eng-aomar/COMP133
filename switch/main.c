#include <stdio.h>

int main() {
    int choice;

    // Prompt user for input
    printf("Enter a number between 1 and 3: ");
    scanf("%d", &choice);

    // Switch statement to perform actions based on user input
    switch (choice) {
        case 1:
            printf("You entered one.\n");
            printf("You entered one.\n");
            break;

        case 2:
            printf("You entered two.\n");
            break;
        case 3:
            printf("You entered three.\n");
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
