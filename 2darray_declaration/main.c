#include <stdio.h>

#define ROWS 3
#define COLS 4


void initializeMatrix(int matrix[ROWS][COLS]);
void printMatrix(int matrix[ROWS][COLS]);

int main() {
    int matrix[ROWS][COLS];

    initializeMatrix(matrix);
    printMatrix(matrix);

    return 0;
}


void initializeMatrix(int matrix[ROWS][COLS]) {
    int count = 1;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
           // matrix[i][j] = count++;
            scanf("%d", matrix[i][j] );
        }
    }
}

void printMatrix(int matrix[ROWS][COLS]) {
    printf("Matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
}
