#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,space,j;
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);


    if (rows > 10)
        rows =10;

    for (i=1; i<=rows; i++)
    {

        for (space =1; space <= (rows-i); space++)
            printf(" ");

        for (j=1; j<= (2*i - 1); j++)
            printf("%d", i-1);
        printf("\n");

    }
    //upside down


    for (i=rows -1; i>=1; i--)
    {

        for (space =(rows-i); space >= 1; space--)
            printf(" ");

        for (j=(2*i - 1); j>=1 ; j--)
            printf("%d", i-1);
        printf("\n");

    }

    return 0;
}
