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
    
    printf("\nChange Maker Machine\n");
    printf("====================\n");
    printf("Enter dollars and cents amount to convert to coins: $");
    scanf("%f", &amount);
    balance = amount * 100;
    printf("\n$2.00 Toonies   X %d (remaining: $%.2f)\n", balance/toonie, (float)(balance % toonie)/100);
    balance %= toonie;
    printf("$1.00 Loonies   X %d (remaining: $%.2f)\n", balance/loonie , (float)(balance % loonie)/100);
    balance %= loonie;
    printf("$.25 Quarters   X %d (remaining: $%.2f)\n", balance/quarter,(float)(balance % quarter)/100);
    balance %= quarter;
    if(balance == 0)
                    {
        printf("All coins dispensed!");
    }
    else
        {
            printf("\nMachine error! Thank you for letting me keep $%.2f!\n", (float)balance/100);
    }
    
return 0;
}
