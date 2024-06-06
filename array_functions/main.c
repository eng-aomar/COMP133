#include <stdio.h>
void initializeMarks(int marks[], int length);
int sumOfMarks(int marks[], int length);

int main() {
    int marks[5];
    int x[]={1,2,3,4};
    unsigned size =sizeof(x);
    int len= 5;
    int ss[len];
    printf("Size of x is %d\n",size);
    // call initializeMarks function
    initializeMarks(marks, 5);

    // call sumOfMarks function
    int sum = sumOfMarks(marks, 5);
    int index =0, key;
    printf("Please enter the value of key\n");
    scanf("%d", &key);
    index = search_array(marks,5,key);
    printf("The index is: %d\n", index);
    float avg = sum /5.0;
    printf("Avg of marks: %2.2f\n", avg);

    return 0;
}
// Function to initialize the array marks
void initializeMarks(int *marks, int length) {
    printf("Enter %d marks:\n", length);
    for (int i = 0; i < length; i++) {
        scanf("%d", &
              marks[i]);
    }
}

// Function to find the sum of elements in the array marks
int sumOfMarks(int marks[], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += marks[i];
    }
    return sum;
}

int search_array(int a[], int length, int key){

for (int i =0; i< length; i++){

    if (key == a[i])
        return i;

}

return -1;

}
