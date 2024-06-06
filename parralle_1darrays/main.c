#include <stdio.h>

#define ROWS 2
#define COLMS 3
#define SIZE 3
int main() {
    int array1[SIZE];
    int array2[SIZE];
    int array_m1[3][3]={{1,2,3},{4,5,6},{7,8,9} }; // method1

    int array_m2[3][3]={1,2,3,4,5,6,7,8,9 }; // method2
    int array_3 [][3] ={1,2,3,4,5,6,7,8,9 }; //(9/3 ==3 )

    //int array_4 [3][]={1,2,3,4,5,6,7,8,9 };
    int array_5[ROWS][COLMS];
    printf("Please enter the elements of the array\n");
    for (int i=0; i< ROWS; i++){

            for(int j=0; j< COLMS; j++){ // columns
                printf("Please enter the element[%d][%d]\n",i,j);
                scanf("%d", &array_5[i][j]);
            }
    } // rows
 printf("=======================================\n");
        for (int i=0; i< ROWS; i++){

            for(int j=0; j< COLMS; j++){ // columns
                //printf("Please enter the element[%d][%d]\n",i,j);
                //scanf("%d", &array_5[i][j]);
                printf("The element[%d][%d] =%d \t",i,j ,array_5[i][j] );
            }
    } // rows
    // read values

    // print transpose of an array
        for (int i=0; i< COLMS; i++){
                    for (int j=0; j< ROWS; i++){
                            printf("%d\t",array_5[j][i] );
                    }
                    printf("\n");

        } // end of for loop


    int sum[SIZE];

    // Reading values for array1 and array2
    printf("Enter values for array1:\n");
    readArray(array1, SIZE);

    printf("Enter values for array2:\n");
    readArray(array2, SIZE);

    // Summing arrays in parallel
    for (int i = 0; i < SIZE; i++) {
        sum[i] = array1[i] + array2[i];
    }

    // Printing the sum array
    printf("Sum of the arrays:\n");
    printArray(sum, SIZE);
    return 0;
}

void readArray(int array[], int size) {
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
