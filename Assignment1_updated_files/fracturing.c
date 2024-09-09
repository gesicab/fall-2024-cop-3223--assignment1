#include <stdio.h>
#include <math.h>   // for math calculations
#define PI 3.14159  //defines the constant for pi


double calculateDistance() {

    double x1, y1, x2, y2, distance, radius;    // declares the variables for coordinates

    // asks the user for the first coordinates
    printf("Enter coordinates for point 1: ");
    scanf("%lf %lf", &x1, &y2); //saves the data into the variables

    // asks the user for the first coordinates 
    printf("Enter coordinates for point 2: ");
    scanf("%lf %lf", &x1, &y2); //saves the data into the variables

    // calculates distance
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y2, 2));

    // displays the points and calculated distance to the user
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);

    // returns the variable "distance" after calculations
    return distance;
}

// function to calculate perimeter
double calculatePerimeter() {
    
    double distance = calculateDistance();
    double radius = distance / 2; // finds the radius
    double perimeter = 2 * PI * radius  ;  // calculates perimeter
    double difficulty;  // For difficulty rating (idea from ChatGPT)

    printf("The perimeter of the city is %.2f\n", perimeter);

    // returns the value for difficulty
    printf("On a scale 1.0 to 5.0, how difficult was this function for you? \n");
    scanf("%lf", &difficulty); 
    return difficulty;
}

// function to calculate area
double calculateArea() {

    double distance = calculateDistance();
    double radius = radius = distance / 2; // finds the radius
    double area = PI * pow(radius, 2); // calls the variable PI to calculate area
    double difficulty;
    printf("The area of the city is %.2f\n", area);


    printf("On a scale 1.0 to 5.0, how difficult was this function for you? \n");
    scanf("%lf", &difficulty);
    return difficulty;
}

// function to calculate width
double calculateWidth() {

    double width = calculateDistance(x1, x2);
    printf("The width of the city encompassed by your request is %.2f\n", width);

    double difficulty;
    printf("On a scale 1.0 to 5.0, how difficult was this function for you? \n");
    scanf("%lf", &difficulty);
    return difficulty
}

// function to calculate height
double calculateHeight() {

    double height = calculateDistance(y1, y2);
    double difficulty;
    printf("The height of the city encompassed by your request is %.2f\n", height);

    printf("On a scale 1.0 to 5.0, how difficult was this function for you? \n");
    scanf("%lf", &difficulty);
    return difficulty;
}

int main(int argc, char**aargv) {
    // calls the functions defined above
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    calculateDifficulty();
    return 0;
}
 