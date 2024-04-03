/*


*/

#include <stdio.h>
#include <stdlib.h>
#define KMS_PER_MILE 1.609

int main (void)
{
    double miles1,miles2,kms1,kms2;
    printf ("This program calculates the kilometers from miles\n");
    printf ("you can enter two miles values\n");
    printf ("_________________________________________________\n\n");

    /* get the distance in miles */

    scanf ("%lf",&miles1);
    scanf ("%lf",&miles2);
    printf ("distance1 in miles > %f\n",miles1);
    printf ("distance2 in miles > %f\n",miles2);

    /*   */
    kms1 = KMS_PER_MILE * miles1;
    /*   */
    kms2 = KMS_PER_MILE * miles2;

    /* */
    printf ("The distance 1 equals %10.4lf kilometers.\n",kms1);
    printf ("The distance 2 equals %10.4lf kilometers.\n",kms2);

    return (0);

}
