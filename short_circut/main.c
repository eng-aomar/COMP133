#include <stdio.h>

int main() {
    int numerator = 10;
    int denominator = 1;

    // Check if the denominator is not zero before performing division
    if (denominator !=0 && numerator / denominator > 5) {
        printf("Division result is greater than 5.\n");
    } else {
        printf("Division result is not greater than 5, or the denominator is zero.\n");
    }

    return 0;
}
