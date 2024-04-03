/*
  * Calculate and display the area and circumference of a circle
  */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159	/* constant PI */

double find_area(double r);
double find_circum(double r);

int main(void)
{
  double radius; 		/* input – radius of a circle */
  double area;		/* output – area of a circle */
  double circum;		/* output – circumference */

  /* Get the radius */
  printf("Enter radius> ");
  scanf("%lf", &radius);

  area = find_area(radius);

  /* Calculate the area */
//  area = PI*radius*radius;

  /* Calculate the circumference */
//  circum = 2*PI*radius;
  circum = find_circum(radius);
  /* Display the area and circumference */
  printf("The area is %.4f\n", area);
  printf("The circumference is %.4f\n", circum);
  system ("pause");
  return (0);
}

double find_area(double r)
{
       return (PI*pow(r,2));
}
double find_circum(double r)
{
       return (PI*r*2);
}
