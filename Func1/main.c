#include <stdio.h>
#include <stdlib.h>
double find_area(double len);
/*
Functions types
 1. Function with no argument and no return value


 */
int main()
{

    double length, result;
    printf("Please enter the value of square length\n");  //main read vairable
    scanf("%lf", &length);

    result= find_area(length); // just calculation

    printf("The Area of the square = %.2f \n", result); // printf final result

    printf("Hello\n");
    return 0;
}



double find_area(double len){


    double area = len*len;


   return area;
}


/*
void find_area(double len){


    double area = len*len;

   printf("The Area of the square = %.2f \n", area); //void
}




double find_area_1(void){

    double length; // local variable متغير محلي
    printf("Please enter the length of the square\n");
    scanf("%lf", &length);
    double area = length*length;
    return area;
    //printf("The Area of the square = %.2f \n", area);
}
*/


/*
void find_area(void){

    double length;
    printf("Please enter the length of the square\n");
    scanf("%lf", &length);
    double area = length*length;
    printf("The Area of the square = %.2f \n", area);
}
*/




