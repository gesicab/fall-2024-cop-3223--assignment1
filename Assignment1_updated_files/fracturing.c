#include <stdio.h>
#include <math.h>   // for math calculations


double calculateDistance() {

    // asks the user for the first coordinates
    printf("Enter coordinates for point 1 (x1,y1): ");
    scanf("%lf %lf", &x1, &y2); //saves the data into the variables

    // asks the user for the first coordinates 
    printf("Enter coordinates for point 2");
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


int main(int argc, char**aargv) {
    calculateDistance();
    
    return 0;
}
 