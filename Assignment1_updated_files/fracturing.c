#include <stdio.h>
#include <math.h>   // for math calculations
#define PI 3.14159  //defines the constant to use when calculating area


double calculateDistance() {

    double x1, y1, x2, y2, distance;    // declares the variables for coordinates

    // asks the user for the first coordinates
    printf("Enter coordinates for point 1 (x1,y1): ");
    scanf("%lf %lf", &x1, &y2); //saves the data into the variables

    // asks the user for the first coordinates 
    printf("Enter coordinates for point 2: ");
    scanf("%lf %lf", &x1, &y2); //saves the data into the variables

    // calculates distance
    distance = sqrt(pow(x2 - x1, 2) + pow(x2 - x2, 2));

    // displays the points and calculated distance to the user
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f \n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);

    // returns the variable "distance" after calculations
    return distance;
}

// function to calculate width
double calculateWidth() {
    width = calculateDistance(y1, y2); // finds the width
    printf("The width of the city encompassed by your request %.2f\n", width);
    return width
}

// function to calculate perimeter
double calculatePerimeter() {
    
    double distance, perimeter, difficulty;

    length = calculateDistance(x1, x1);  // find the height
    perimeter = length * width ;  // calculates perimeter

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f \n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The perimeter of the city is %.2f\n", perimeter);

    // returns the variable for difficulty
    return difficulty;
}


// function to calculate area
double calculateArea() {
    radius = calculateDistance()/2;   // finds the radius
    area = PI * pow(radius, 2);       // calls the variable PI to calculate area
    
    // returns the variable storing information for difficulty
    return difficulty;
}

double calculateDifficulty() {

    // asks the user for difficulty and saves the data into the variable
    printf("On a scale 1.0 to 5.0, how difficult was this function for you? \n");
    scanf("%lf", &difficulty);

    return difficulty
}

int main(int argc, char**aargv) {
    // calls the functions defined above
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateDifficulty();
    return 0;
}
 