#include <stdio.h>

void dispenseChange(float amountPaid, float amountDue, int *num200Bills, int *num150Bills, int *num50Bills, int *num20Bills, int *num10Coins, int *num5Coins, int *num2Coins, int *num1Coins) {
    float change = amountPaid - amountDue;

    *num200Bills = change / 200;
    change -= *num200Bills * 200;

    *num150Bills = change / 150;
    change -= *num150Bills * 150;

    *num50Bills = change / 50;
    change -= *num50Bills * 50;

    *num20Bills = change / 20;
    change -= *num20Bills * 20;

    *num10Coins = change / 10;
    change -= *num10Coins * 10;

    *num5Coins = change / 5;
    change -= *num5Coins * 5;

    *num2Coins = change / 2;
    change -= *num2Coins * 2;

    *num1Coins = change / 1;
}

int main() {/*
    float amountPaid, amountDue;
    int num200Bills, num150Bills, num50Bills, num20Bills, num10Coins, num5Coins, num2Coins, num1Coins;

    printf("Enter amount paid: ");
    scanf("%f", &amountPaid);
    printf("Enter amount due: ");
    scanf("%f", &amountDue);

    dispenseChange(amountPaid, amountDue, &num200Bills, &num150Bills, &num50Bills, &num20Bills, &num10Coins, &num5Coins, &num2Coins, &num1Coins);

    printf("Change breakdown:\n");
    printf("200 Bills: %d\n", num200Bills);
    printf("150 Bills: %d\n", num150Bills);
    printf("50 Bills: %d\n", num50Bills);
    printf("20 Bills: %d\n", num20Bills);
    printf("10 Coins: %d\n", num10Coins);
    printf("5 Coins: %d\n", num5Coins);
    printf("2 Coins: %d\n", num2Coins);
    printf("1 Coins: %d\n", num1Coins);
*/
int a[5]={0,-1,1};
for (int i=0; i<5; i++)
    printf("%d\n",a[i]);
    return 0;
}
