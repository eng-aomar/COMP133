#include <stdio.h>

void arithmeticOperations(int a, int b, int *sum, int *difference, int *product, float *div);

int main() {
    int num1, num2, sum, difference, product;
    float div;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    arithmeticOperations(num1, num2, &sum, &difference, &product, &div);

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %.2f\n", div);

    return 0;
}
