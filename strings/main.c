#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char name[6]={'h','e','l','l','o','\0'}; // size = number of charachters +1
    char s1[5];

    printf("%s\n", name);
    gets(s1);
    puts(s1);
    int count =strlen(s1);
    printf("The size of the string is %d: ", count);

    return 0;
}
