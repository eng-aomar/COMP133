#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i =0, j =5;
    int *y;
    y=&j;

    for (i=0; i<=4; i++)
    {
        *y = *y + i;
        printf("The Value of *y is %d, the value of j is %d\n", *y, j);
    }
    printf("The final value of j is %d \n", j);
    return 0;
}
