#include <stdio.h>

int main()
{
    char road_status;
    int temp;

    printf("Please enter road status> ");
    scanf(" %c", &road_status); // Corrected the format specifier and added address-of operator (&)
    printf("Please enter temp> ");
    scanf("%d", &temp); // Added address-of operator (&)

    if (road_status == 'S')
        if (temp > 0)
            printf("Wet roads ahead!\n");
        else
            printf("Icy roads ahead!\n");

  //  else
    //    printf("Drive carefully!\n");


    return 0;
}
