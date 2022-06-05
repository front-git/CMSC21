#include<stdio.h>
#include<math.h>

void main()
{
    float x1, x2, y1, y2, slope, mid_x, mid_y, distance, b;
    double m;

    /*This block of code assigns the x and y coordinates of point1 to variables 'x1' and 'y1' variables respectively according to user input*/
    printf("Please input x of point1.\n> ");
    scanf("%f",&x1);
    printf("Please input y of point1.\n> ");
    scanf("%f",&y1);

    /*This block of code assigns the x and y coordinates of line2 to variables 'x2' and 'y2' variables respectively according to user input*/
    printf("Please input x of line2.\n> ");
    scanf("%f",&x2);
    printf("Please input y of line2.\n> ");
    scanf("%f",&y2);


    /*This code calculates by using the formulas for finding
    the slope and midpoint of a line and assignming them in the
    'slope', 'midX', and 'midY variables respectively.*/
    slope=(y2-y1)/(x2-x1);

    mid_x=(x1+x2)/2;
    mid_x=(y1+y2)/2;

    /*This code calculates by using the formulas for finding
    the distance and slope-intercept form of a line and assigning
    them in the 'distance', 'm', and 'b' variables respectively.*/
    distance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
	m=(y2-y1)/(x2-x1);
    b=y2-(m*x2);

    /*Output Code printing all the results from the calculations, namely;
    Slope, Midpoint, Distance, and Slope-intercept Form of a Line.*/
    printf("The resulting SLOPE is:\n> %.2f\n",slope);
    printf("\nThe resulting MIDPOINT is:\n> (%.2f,%.2f)\n",mid_x,mid_y);
    printf("\nThe Distance between the 2 Points is:\n> %.4f\n", sqrt(distance));
    printf("\nY is equal to:\n> y = %.0fx + %.0f\n",m,b);
}
