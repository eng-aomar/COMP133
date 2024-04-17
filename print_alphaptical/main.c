#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch='a';

    for(int i=0; i<7; i++){
        for(int j=0; j<4; j++)
    {
        printf(" %c", ch);
        ch++;
        if (ch>'z')
            break;
    }
      printf("\n");
    }

    return 0;
}
