#include <stdio.h>
#include <stdlib.h>

int main() {
    int num = 12345; // The integer to write
    int read_num;    // The integer to read back
    FILE *fptr;// step number 1

    // Open the file for writing in binary mode
    if ((fptr = fopen("integer.bin", "wb")) == NULL) {
        printf("Error! opening file\n");
        exit(1);
    }

    // Write the integer to the file
    if (fwrite(&num, sizeof(int), 1, fptr) != 1) {
        printf("Error! writing to file\n");
        //fclose(fptr);
       // exit(1);
    }

    fclose(fptr);

    // Open the file for reading in binary mode
    if ((fptr = fopen("integer.bin", "rb")) == NULL) {
        printf("Error! opening file\n");
        exit(1);
    }

    // Read the integer from the file
    if (fread(&read_num, sizeof(int), 1, fptr) != 1) {
        printf("Error! reading from file\n");
        fclose(fptr);
        exit(1);
    }

    fclose(fptr);

    // Print the read integer
    printf("Read integer: %d\n", read_num);

    return 0;
}
