#include <stdio.h>
#include <stdlib.h>

struct threeNum {
    int n1, n2, n3;
};

int main() {
    int n;
    struct threeNum num;
    FILE *fptr;

    // Write to file
    if ((fptr = fopen("program.bin", "wb")) == NULL) {
        printf("Error! opening file\n");
        exit(1);
    }

    for (n = 1; n < 5; ++n) {
        num.n1 = n;
        num.n2 = 5 * n;
        num.n3 = 5 * n + 1;
        if (fwrite(&num, sizeof(struct threeNum), 1, fptr) != 1) {
            printf("Error! writing to file\n");
            exit(1);
        }
    }
    fclose(fptr);

    // Read from file

    if ((fptr = fopen("program.bin", "rb")) == NULL) {
        printf("Error! opening file\n");
        exit(1);
    }

    for (n = 1; n < 5; ++n) {
        if (fread(&num, sizeof(struct threeNum), 1, fptr) != 1) {
            printf("Error! reading from file\n");
            exit(1);
        }
        printf("n1: %d, n2: %d, n3: %d\n", num.n1, num.n2, num.n3);
    }
    fclose(fptr);

    return 0;
}
