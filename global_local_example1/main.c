#include <stdio.h>
void function();

// Global variable
int  globalVar = 10;



int main() {
    // Accessing the global variable
    printf("Inside main:\n");
    printf("Global variable: %d\n", globalVar);
 //  globalVar ++;
    // Trying to access the local variable will result in a compilation error
    // Uncommenting the line below will result in an error
    // printf("Local variable: %d\n", localVar);

    // Calling the function
    function();
    {
        int x =50;
        printf("%d", x);
    }
    printf("%d", x);

    return 0;
}
void function() {
    // Local variable
    int localVar = 20;

    // Accessing both global and local variables
    printf("Inside function:\n");
    printf("Global variable: %d\n", globalVar);
    printf("Local variable: %d\n", localVar);
    {

    }
}
