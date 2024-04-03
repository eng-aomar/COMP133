#include <stdio.h>

int main() {
    char ch;

    // Prompt user for input
    printf("Enter a letter (uppercase or lowercase): ");
    scanf(" %c", &ch);

    // Convert lowercase characters to uppercase
    switch(ch) {
        case 'a':
        case 'A':
            printf("You entered 'a'.\n");
            break;
        case 'b':
        case 'B':
            printf("You entered 'b'.\n");
            break;
        // Add more cases as needed for other letters
        default:
            printf("You entered a character other than 'a' or 'b'.\n");
    }

    return 0;
}
