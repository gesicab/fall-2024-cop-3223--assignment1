// Gesica Borecki
// UCFID: 5487663
// all my ideas unless otherwise specified

#include <stdio.h>
#include <math.h>   // for math calculations
#define PI 3.14159  // defines the constant for pi (help from stackoverflow)

// helper function to calculate distance seperate from printing it (idea from chatGPT)
double calculateusedDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// function to get coordinates
double calculateDistance() {
    double x1, y1, x2, y2, distance;    // initializes the variables for coordinates

    // asks the user for coordinates
    printf("Enter coordinates for point 1 (x1 y1): \n");
    scanf("%lf %lf", &x1, &y1);     // saves the data into variables
    printf("Enter coordinates for point 2 (x2 y2): \n");
    scanf("%lf %lf", &x2, &y2);     // saves the data into variables

    // calculates distance by calling the helper function
    // (idea from chatGPT) need to pass through meaningful variables
    distance = calculateusedDistance(x1, y1, x2, y2); 

    // displays the points and calculated distance to the user
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);

    // returns the variable "distance" after calculations
    return distance;
}

// function to calculate perimeter
double calculatePerimeter() {
    double x1, y1, x2, y2;  // initializing variables

    // asks the user for coordinates
    printf("Enter coordinates for point 1 (x1 y1): \n");
    scanf("%lf %lf", &x1, &y1);     // saves the data into variables
    printf("Enter coordinates for point 2 (x2 y2): \n");
    scanf("%lf %lf", &x2, &y2);     // saves the data into variables

    // calculates distance (diameter)
    double distance = calculateusedDistance(x1, y1, x2, y2); // finds the diameter through the distance function
    double radius = distance / 2; // calculates the radius
    double perimeter = 2 * PI * radius  ;  // calculates perimeter

    // displays the output for perimeter and asks for difficulty
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The perimeter of the city is %.2f\n", perimeter);

    // returns difficulty level
    return 4.0;
}

// function to calculate area
double calculateArea() {
    double x1, y1, x2, y2;  // initializing variables

    // asks the user for coordinates
    printf("Enter coordinates for point 1 (x1 y1): \n");
    scanf("%lf %lf", &x1, &y1);     // saves the data into the variables
    printf("Enter coordinates for point 2 (x2 y2): \n");
    scanf("%lf %lf", &x2, &y2);     // saves the data into the variables

    // calculates area
    double distance = calculateusedDistance(x1, y1, x2, y2); // finds the diameter (distance)
    double radius = distance / 2; // calculates the radius
    double area = PI * pow(radius, 2); // calls the variable PI to calculate area

    // displays the output for area and asks for difficulty
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The area of the city is %.2f\n", area);

    // difficulty level
    return 4.0;
}

// function to calculate width
double calculateWidth() {
    double x1, y1, x2, y2;

    // asks the user for coordinates
    printf("Enter coordinates for point 1 (x1 y1): \n");
    scanf("%lf %lf", &x1, &y1);     // saves the data into the variables
    printf("Enter coordinates for point 2 (x2 y2): \n");
    scanf("%lf %lf", &x2, &y2);     // saves the data into the variables

    double width = fabs(x2 - x1);    // calculating width using absolute value

    // displays the width
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The width of the city encompassed by your request is %.2f\n", width);

    // difficulty level
    return 2.0;    // difficulty level
}

// function to calculate height
double calculateHeight() {
    double x1, y1, x2, y2;
    double height = fabs(y2 - y1);   // calculating height using absolute value

    // asks the user for coordinates
    printf("Enter coordinates for point 1 (x1 y1): \n");
    scanf("%lf %lf", &x1, &y1);     // saves the data into the variables
    printf("Enter coordinates for point 2 (x2 y2): \n");
    scanf("%lf %lf", &x2, &y2);     // saves the data into the variables

    // displays the height
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The height of the city encompassed by your request is %.2f\n", height);

    // difficulty level
    return 2.0;
}

// calls the functions so they can be executed
int main(int argc, char**argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}