/*
 ==================================================
 Workshop #3 (Part-2):
 ==================================================
 Name   :jordon murray
 ID     :108464181
 Email  :jmurray12@myseneca.ca
 Section:ipc144
 */
#define _CRT_SECURE_NO_WARNINGS
#define MIN_NUMBER_OF_ITEMS 1
#define MAX_NUMBER_OF_ITEMS 10
#include <stdio.h>

int main()
{
    const float MIN_INCOME = 500.00, MAX_INCOME = 400000.00;
    const float minimum_cost,minimum_item_cost = 100.0;
    int number_of_items = 0;
    float cost [MAX_NUMBER_OF_ITEMS];
    float income = 0.0, total_cost;
    int priority [MAX_NUMBER_OF_ITEMS];
    char finance_options [MAX_NUMBER_OF_ITEMS];
    int valid = 0;
    printf("\n+--------------------------+\n");
    printf("+   Wish List Forecaster   |\n");
    printf("+--------------------------+\n");
    valid = 1;
    while(valid){
        printf("\nEnter your monthly NET income: $");
        scanf("%f", &income);
        if(income < MIN_INCOME)
        {
            printf("ERROR: You must have a consistent monthly income of at least $%.2f\n", MIN_INCOME);
        }
        else if(income > MAX_INCOME)
        {
            printf("ERROR: Liar! I'll believe you if you enter a value no more than $%.2f\n", MAX_INCOME);
        }
        
        if( income > MIN_INCOME && income < MAX_INCOME)
        {
            valid = 0;
        }
    }
    valid = 1;
    while (valid == 1) {
        printf("\nHow many wish list items do you want to forecast?: ");
        scanf("%d", &number_of_items);
        if(number_of_items < MIN_NUMBER_OF_ITEMS  || number_of_items > MAX_NUMBER_OF_ITEMS)
        {
            printf("ERROR: List is restricted to between %d and %d items\n", MIN_NUMBER_OF_ITEMS, MAX_NUMBER_OF_ITEMS);
        }
        else{
            valid = 0;
        }
    }
    valid = 1;
    for (int i =0; i < number_of_items; i++) {
        valid = 1;
        printf("\nItem-%d Details:\n", i+1);
        while (valid == 1) {
            printf("    Item cost: ");
            scanf("%f", &cost[i]);
            if (cost[i]  > minimum_item_cost) {
                valid = 0;
            }
            else {
                printf("        ERROR: Cost must be at least $%.2f \n", minimum_item_cost);
            }
        }
        valid = 1;
        while (valid == 1) {
            printf("    How important is it to you? [1=must have, 2=important, 3=want]: ");
            scanf("%d", &priority[i]);
            if (priority[i]  > 0 && priority[i]  < 4 ) {
                valid = 0;
            }
            else {
                printf("        ERROR: Value must be between 1 and 3\n");
            }
        }
        valid = 1;
        while (valid == 1) {
            printf("    Does this item have financing options? [y/n]: ");
            scanf("%s", &finance_options[i]);
            if ( finance_options[i] == 'y' || finance_options[i] == 'n'  ) {
                valid = 0;
            }
            else {
                printf("        ERROR: Must have a lowercase 'y' or 'n'\n");
            }
        }
        
    }
    printf("\nItem Priority Financed         Cost\n");
    printf("---- -------- -------- ------------\n");
    for (int i = 0;i < number_of_items; i++) {
        printf(" %d      %d          %c       %.2f\n", i+1, priority[i],finance_options[i],cost[i]);
        total_cost += cost[i];
    }
    printf("---- -------- -------- ------------\n");
    printf("                      $ %.2f\n\nBest of luck in all your endeavours!",total_cost);
    return 0;
}


