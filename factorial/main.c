/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, factorial=1;

    printf("Please enter the number to calculate the factorial \n");
    scanf("%d",n);

    for(int i=n; i>=1; i--)
    {
        factorial= factorial*i;
        printf(factorial);

    }
    printf("The factorial of %d is %d", n,factorial);
    return 0;
}*/
#include <stdio.h>

int main() {
    int n, i;
    int factorial = 1;

    // Input
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    // Calculation
    for (i = n; i >=1; i--) {
        factorial *= i;
    }

    // Output
    printf("Factorial of %d = %llu\n", n, factorial);

    return 0;
}

