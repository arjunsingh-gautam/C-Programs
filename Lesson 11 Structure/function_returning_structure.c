//Function returning structure
#include <stdio.h>

// Define a structure for a point in 2D space
struct Point {
    int x;
    int y;
};

// Function prototype: returns a struct Point
struct Point createPoint(int x, int y);

int main() {
    int x, y;

    // Input coordinates from user
    printf("Enter x coordinate: ");
    scanf("%d", &x);
    printf("Enter y coordinate: ");
    scanf("%d", &y);

    // Create a Point using the createPoint function
    struct Point p = createPoint(x, y);

    // Print the created Point
    printf("Created Point: (%d, %d)\n", p.x, p.y);

    return 0;
}

// Function definition: returns a struct Point
struct Point createPoint(int x, int y) {
    struct Point q;
    q.x = x;
    q.y = y;
    return q;
}
