#include <stdio.h>
#include <stdlib.h>

int main()
{


    int i,j,space;
    int rows;
    printf("Please enter the number of rows: ");
    scanf("%d", &rows);

    for (i=1; i<=rows; i++)
    {

        for (j=1; j<=i; j++)
            printf("*");
        printf("\n");
    }
        for (i=rows-1; i>=1; i--)
    {

        for (j=i; j>=1; j--)
            printf("*");
        printf("\n");
    }
/*
  for (i=rows -1; i>=1; i--)
    {

        for (j=i; j>=1; j--)
            printf("*");
        printf("\n");
    }*/
    return 0;
}

    /*
       for (i=1; i<=rows; i++){

        for (space=1; space<=rows-i; space++)
            printf(" ");
        for (j=1; j<=i; j++)
            printf("%d", i);
        printf("\n");
       }
    */
