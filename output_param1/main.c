#include <stdio.h>
void sum(int a, int b, int *cp);
int main(void)
{
    int x, y, z;

    x = 5;
    y = 3;

    printf("x\t y\t sum \n\n");
    sum(x, y, &z);
    printf("%d\t%d\t%d\n", x, y, z);
    sum(y, x, &z);
    printf("%d\t%d\t%d\n", x, y, z);
    sum(z,y, &x);
    printf("%d\t%d\t%d\n", x, y, z);
    sum(z, z, &x);
    printf("%d\t%d\t%d\n", x, y, z);
    sum(y, y, &y);
    printf("%d\t%d\t%d\n", x, y, z);
    return (0);
}
void sum(int a, int b, int *cp)
{
    *cp = a + b;
    // printf("%d", cp);

}
