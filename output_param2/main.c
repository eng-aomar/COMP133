#include <stdio.h>

void rectangleInfo(int length, int width, int *area, int *perimeter);

int main() {
    int length, width;
    int area, perimeter;

    // Prompt the user to enter the length and width of the rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);

    // Calculate area and perimeter using the provided length and width
    rectangleInfo(length, width, &area, &perimeter);
    length++;
    width++;
    // Display the calculated area and perimeter
    printf("Area: %d\n", area);
    printf("Perimeter: %d\n", perimeter);

    // Display the calculated area and perimeter
    printf("length: %d\n", length);
    printf("width: %d\n", width);

    return 0;
}
void rectangleInfo(int length, int width, int *area, int *perimeter) {

    *area = length * width;
    *perimeter = 2 * (length + width);
    // length++;
    // width++;

    printf("inside rectangle Infolength: %d\n", length);
    printf("inside rectangle width: %d\n", width);

}
