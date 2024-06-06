#include <stdio.h>
#include <string.h>

int main() {
    char s1[10];
    char rev[10];

    // Use fgets instead of gets for safer input handling
    if (fgets(s1, sizeof(s1), stdin) != NULL) {
        // Remove the newline character if it's there
        s1[strcspn(s1, "\n")] = '\0';

        int size = strlen(s1);
        printf("Size of the string is: %d\n", size);

        // Correct logic to reverse the string
        for (int i = 0; i < size; i++) {
            rev[i] = s1[size - i - 1];
        }
        rev[size] = '\0'; // Null-terminate the reversed string

        printf("-----------------\n");
        printf("%s\n", rev);
    }

    return 0;
}
