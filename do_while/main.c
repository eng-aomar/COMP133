#include <stdio.h>

int main() {
    char letter_choice;

    do {
        printf("Enter a letter from A through E> ");
        scanf(" %c", &letter_choice); // Note the space before %c to consume any whitespace characters left in the input buffer

        if (letter_choice < 'A' || letter_choice > 'E') {
            printf("Invalid input. Please try again.\n");
        }
    } while (letter_choice < 'A' || letter_choice > 'E');

    printf("You entered: %c\n", letter_choice);

    return 0;
}
