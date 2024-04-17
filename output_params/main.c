#include <stdio.h>

void arithmeticOperations(int a, int b, int *sum, int *difference, int *product, float *quotient) {
    *sum = a + b;
    *difference = a - b;
    *product = a * b;
    *quotient = (float)a / b;
}

int main() {
    int num1, num2, sum, difference, product;
    float quotient;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    arithmeticOperations(num1, num2, &sum, &difference, &product, &quotient);

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %.2f\n", quotient);

    return 0;
}
