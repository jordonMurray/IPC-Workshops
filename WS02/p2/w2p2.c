/*
    ==================================================
    Workshop #2 (Part-1):
    ==================================================
    Name   : Jordon Murray
    ID     : 108464181
    Email  : jmurray12@myseneca.ca
    Section: IPC144
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    float amount = 0.00;
    int balance = 0;
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;
    int toonie = 200;
    int loonie = 100;
    float serviceFee;
    
    printf("\nChange Maker Machine\n");
    printf("====================\n");
    printf("Enter dollars and cents amount to convert to coins: $");
    scanf("%f", &amount);
    balance = amount * 100;
    serviceFee = balance * .05;
    balance -= serviceFee;
    printf("Service fee (5.0 percent): %.2f", serviceFee/100);
    printf("\nBalance to dispense: %.2f", (float)(balance)/ 100);

    printf("\n\n$2.00 Toonies   X %d (remaining: $%.2f)\n", balance/toonie, (float)(balance % toonie)/100);
    balance %= toonie;
    printf("$1.00 Loonies   X %d (remaining: $%.2f)\n", balance/loonie , (float)(balance % loonie)/100);
    balance %= loonie;
    printf("$.25 Quarters   X %d (remaining: $%.2f)\n", balance/quarter,(float)(balance % quarter)/100);
    balance %= quarter;
    printf("$.10 Dimes      X %d (remaining: $%.2f)\n", balance/dime, (float)(balance % dime)/100);
    balance %= dime;
    printf("$.05 Nickels    X %d (remaining: $%.2f)\n", balance/nickel, (float)(balance % nickel)/100);
    balance %= nickel;
    printf("$.01 Pennies    X %d (remaining: $%.2f)\n", balance/penny,(float)(balance % penny)/100);
    balance %= penny;
    if(balance == 0)
                    {
        printf("\nAll coins dispensed!\n");
    }
    else
        {
            printf("\nMachine error! Thank you for letting me keep $%.2f!\n", (float)balance/100);
    }
    
return 0;
}
