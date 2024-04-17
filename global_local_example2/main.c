#include <stdio.h>
void incrementCounter() ;
// Global variable representing a counter
int globalCounter = 0;



int main() {
    // Call the function multiple times
    printf("First call:\n");
    incrementCounter();

    printf("\nSecond call:\n");
    incrementCounter();

    printf("\nThird call:\n");
    incrementCounter();

    return 0;
}
// Function to increment the global counter and print the local counter
void incrementCounter() {
    // Local variable representing a counter
    int localCounter = 0; // intitailization

    // Increment both local and global counters
    localCounter++;
    globalCounter++;

    // Print local and global counters
    printf("Local counter: %d\n", localCounter);
    printf("Global counter: %d\n", globalCounter);
}
