#include <stdio.h>

// Define a structure
struct Point {
    int x;
    int y;
};

// Function that takes a structure by value
void printPoint(struct Point p) {
    printf("Point: (%d, %d)\n", p.x, p.y);
}

int main() {
    struct Point p1 = {10, 20};
    printPoint(p1);  // Pass the structure by value
    return 0;
}
