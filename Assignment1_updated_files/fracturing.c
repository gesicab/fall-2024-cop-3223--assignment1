#include <stdio.h>
#include <math.h>   // for math calculations
#define PI 3.14159  //defines the constant for pi

// helper function to avoid repeation in print statements (idea from chatGPT)
double calculateusedDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// helper function to get coordinates


// function to get coordinates
double calculateDistance() {
    double x1, y1, x2, y2, distance;    // declares the variables for coordinates

    // asks the user for the first coordinates
    printf("Enter coordinates for point 1 (x1 y1): \n");
    scanf("%lf %lf", &x1, &y1);     // saves the data into the variables

    // asks the user for the first coordinates 
    printf("Enter coordinates for point 2 (x2 y2): \n");
    scanf("%lf %lf", &x2, &y2);     // saves the data into the variables

    // calculates distance by calling the helper function
    distance = calculateusedDistance(x1, y1, x2, y2);   // (idea from chatGPT)

    // displays the points and calculated distance to the user
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);

    // returns the variable "distance" after calculations
    return distance;
}

// function to calculate perimeter and difficulty
double calculatePerimeter() {
    double x1, y1, x2, y2;
    double distance = calculateusedDistance(x1, y1, x2, y2); // finds the diameter through the distance function
    double radius = distance / 2; // calculates the radius
    double perimeter = 2 * PI * radius  ;  // calculates perimeter
    double difficulty;  // For difficulty rating (idea from ChatGPT)

    // displays the output for perimeter and asks for difficulty
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The perimeter of the city is %.2f\n", perimeter);
    printf("On a scale 1.0 to 5.0, how difficult was this function for you? \n");
    scanf("%lf", &difficulty);

    return difficulty;
}

// function to calculate area and difficulty
double calculateArea() {
    double x1, y1, x2, y2;
    double distance = calculateusedDistance(x1, y1, x2, y2); // finds the diameter (distance)
    double radius = radius = distance / 2; // calculates the radius
    double area = PI * pow(radius, 2); // calls the variable PI to calculate area
    double difficulty;

    // displays the output for area and asks for difficulty
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The area of the city is %.2f\n", area);
    printf("On a scale 1.0 to 5.0, how difficult was this function for you? \n");
    scanf("%lf", &difficulty);

    return difficulty;
}

// function to calculate width and difficulty
double calculateWidth() {
    double x1, y1, x2, y2;
    double width = calculateusedDistance(x1, y1, x2, y2);
    double difficulty;

    // displays the width and asks for difficulty
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The width of the city encompassed by your request is %.2f\n", width);
    printf("On a scale 1.0 to 5.0, how difficult was this function for you? \n");
    scanf("%lf", &difficulty);

    return difficulty;
}

// function to calculate height and difficulty
double calculateHeight() {
    double x1, y1, x2, y2;
    double height = calculateusedDistance(x1, y1, x2, y2);
    double difficulty;

    // displays the height and asks for difficulty
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The height of the city encompassed by your request is %.2f\n", height);
    printf("On a scale 1.0 to 5.0, how difficult was this function for you? \n");
    scanf("%lf", &difficulty);
    return difficulty;
}

// calls the functions so they can be executed
int main(int argc, char**aargv) {
    // calls the functions defined above
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}
 