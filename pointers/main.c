#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int *ptr, i, x=125;
    ptr=&x;

    printf("The Value of X: %d\n", x);
    printf("The Address of X:%d\n", &x);
    printf("---------------------------\n");
    printf("The Value of *ptr: %d\n", *ptr);
    printf("The Value of ptr:%d\n", ptr);
    printf("The Value of &ptr:%d\n", &ptr);
    return 0;
}

/*
int x;
int *p;
scanf("%d",p); /*Incorrect … the pointer is not initialized*/
/*
p = &x;
scanf("%d",p); /* Correct */
/*printf("%d0x);*/
