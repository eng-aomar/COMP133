#include <stdio.h>
#include <stdlib.h>

// Define a macro for the size of the array
#define ARRAY_SIZE 5

int main() {
    float arr[ARRAY_SIZE] = {10, 20, 30, 40, 50};
     int arr2[ARRAY_SIZE] = {0};

    size_t arr_size = ARRAY_SIZE;

    /*
     size_t arr_size = sizeof(arr) / sizeof(arr[0]); Another way to cacluate the size of the array if the size is not there
    */
    FILE *fptr;

    // Open the file for writing in binary mode
    if ((fptr = fopen("array.bin", "wb")) == NULL) {
        printf("Error! opening file\n");
        exit(1);
    }

    // Write the array to the file
  /*  if (fwrite(arr, sizeof(int), ARRAY_SIZE, fptr) != ARRAY_SIZE) {
        printf("Error! writing to file\n");
        fclose(fptr);
        exit(1);
    }*/
    fwrite(arr, sizeof(int), ARRAY_SIZE, fptr);
    fclose(fptr);

    // Open the file for reading in binary mode
    if ((fptr = fopen("array.bin", "rb")) == NULL) {
        printf("Error! opening file\n");
        exit(1);
    }

    // Read the array from the file
    if (fread(arr2, sizeof(int), arr_size, fptr) != arr_size) {
        printf("Error! reading from file\n");
        fclose(fptr);
        exit(1);
    }

    fclose(fptr);

    // Print the array
    for (size_t i = 0; i < arr_size; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
