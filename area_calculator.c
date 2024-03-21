#include <stdio.h>
#include <math.h>

// Function to calculate the area of a rectangle
float rectangleArea(float length, float width) {
    return length * width;
}

// Function to calculate the area of a square
float squareArea(float side) {
    return side * side;
}

// Function to calculate the area of a circle
float circleArea(float radius) {
    return M_PI * radius * radius;
}

// Function to calculate the area of a triangle
float triangleArea(float base, float height) {
    return 0.5 * base * height;
}

int main() {
    int choice;
    float length, width, side, radius, base, height;

    printf("Area Calculation Program\n");
    printf("1. Rectangle\n");
    printf("2. Square\n");
    printf("3. Circle\n");
    printf("4. Triangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter length of rectangle: ");
            scanf("%f", &length);
            printf("Enter width of rectangle: ");
            scanf("%f", &width);
            printf("Area of rectangle: %.2f\n", rectangleArea(length, width));
            break;
        case 2:
            printf("Enter side length of square: ");
            scanf("%f", &side);
            printf("Area of square: %.2f\n", squareArea(side));
            break;
        case 3:
            printf("Enter radius of circle: ");
            scanf("%f", &radius);
            printf("Area of circle: %.2f\n", circleArea(radius));
            break;
        case 4:
            printf("Enter base length of triangle: ");
            scanf("%f", &base);
            printf("Enter height of triangle: ");
            scanf("%f", &height);
            printf("Area of triangle: %.2f\n", triangleArea(base, height));
            break;
        default:
            printf("Invalid choice. Please enter a number between 1 and 4.\n");
    }

    return 0;
}
