#include <stdio.h>
#include <math.h>

struct line{
    struct point{                   // coordinates x and y
        float x;
        float y; 
    }point1, point2;                    
    float midpoint[2];              // midpoint variable , array has been used because there are two values
    float slope;                    // slope variable
    float distance;                 // distance variable
}line1;

/* Function for Slope */
float solveSlope (struct line line1)
{
    line1.slope = (line1.point2.y - line1.point1.y)/(line1.point2.x - line1.point1.x);
    return line1.slope;  // return value of slope
}

/* Function for Midpoint */
float solveMidpoint (struct line line1)
{
    line1.midpoint[0] = (line1.point2.x + line1.point1.x)/2;                 // x value midpoint
    line1.midpoint[1] = (line1.point2.y + line1.point1.y)/2;                 // y value midpoint
    printf("The resulting Midpoint is (%g,%g)\n",line1.midpoint[0],line1.midpoint[1]);
}

/* Function for Distance */
float solveDistance (struct line line1)
{
    line1.distance = sqrt(pow((line1.point1.x - line1.point2.x), 2) + pow((line1.point1.y - line1.point2.y), 2));           // Distance Equation with the use of math.h
    printf("The resulting distance between the points is %g\n", line1.distance);
}

/* Function for Slope Intercept Form */
void getSlopeInterceptForm (struct line line1)
{
    float b;                                                                                                                // y-intercept

    b = line1.point2.y - (line1.slope*line1.point2.x);                                                                      // Finding the y -intercept, from y = mx+b ---> b = y - mx
    printf ("The Slope-Intercept Form is y=%gx+%g\n", solveSlope(line1), b);
}

////////////////////////////////////////////////////////////               M A I N     F U N C T I O N               ////////////////////////////////////////////////////////////

int main(){  
// Asking for User Input x and y, point 1
    printf("(Point 1) Please Enter values of x:");
    scanf("%f",&line1.point1.x);
    printf("(Point 1) Please Enter values of y:");
    scanf("%f",&line1.point1.y);
// Asking for User Input x and y, point 2
    printf("(Point 2) Please Enter values of x:");
    scanf("%f",&line1.point2.x);
    printf("(Point 2) Please Enter values of y:");
    scanf("%f",&line1.point2.y);

    // Outputs
    printf("\n");
    printf("----THE RESULTS----\n");
    printf ("The resulting slope is %g\n", solveSlope(line1));
    solveMidpoint(line1);
    solveDistance(line1);
    getSlopeInterceptForm(line1);
}