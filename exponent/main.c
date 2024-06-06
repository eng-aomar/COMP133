#include <stdio.h>
#include <stdlib.h>

double power(double base, int exponent){

    if (exponent == 0)
    {

        return 1;
    }

    if (exponent > 0){
        return base * power(base, exponent -1);
    }

    if (exponent <0){

        return 1 /(power(base, -exponent));
    }


}

int main()
{
    double res = power(2,-1);
    printf("res= %f ",res);
    return 0;
}
