#include <stdio.h>
void swap(int num1, int num2);

int main() {
    int num1 = 10, num2 = 20;

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Call swap function, passing the addresses of num1 and num2
    swap(num1, num2);



    return 0;
}

// Function to swap two integers using pointers

void swap(int num1, int num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
}


