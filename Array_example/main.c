#include <stdio.h>

int main() {
    // Declare an array of integers with a size of 5
    int numbers[5];

    // Initialize the array elements individually
   // numbers[0] = 10;
   // numbers[1] = 20;
   // numbers[2] = 30;
   // numbers[3] = 40;
   // numbers[4] = 50;

int *ptr1, *ptr2;
int a[10];
ptr1 = &a[2];
a[2]=10;
ptr2 = a;
printf("%d\n", a[2]);
printf("%d\n", *ptr1);
    // Access and print individual elements of the array
  //  printf("Element at index 0: %d\n", numbers[0]);
  //  printf("Element at index 1: %d\n", numbers[1]);
   // printf("Element at index 2: %d\n", numbers[2]);
   // printf("Element at index 3: %d\n", numbers[3]);
//printf("Element at index 4: %d\n", numbers[4]);

    // Modify an element of the array
   // numbers[2] = 35;

    // Print the modified element
   // printf("Modified element at index 2: %d\n", numbers[2]);

    return 0;
}
