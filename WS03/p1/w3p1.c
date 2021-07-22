/*
	==================================================
	Workshop #3 (Part-1):
	==================================================
	Name   :jordon murray
	ID     :108464181
	Email  :jmurray12@myseneca.ca
	Section:ipc144
*/
#define _CRT_SECURE_NO_WARNINGS
#define MIN_YEAR 2010
#define MAX_YEAR 2021
#include <stdio.h>

int main()
{
    const int JAN = 1;
    const int DEC = 12;
    int year,month,date = 1, valid = 1;
    printf("\nGeneral Well-being Log\n");
    printf("======================\n");
    
    while(valid){
        printf("Set the year and month for the well-being log (YYYY MM): ");
        scanf("%d %d", &year,&month);
        if(year < MIN_YEAR ||  year > MAX_YEAR)
        {
            printf("    ERROR: The year must be between 2010 and 2021 inclusive\n");
        }
        if(month < JAN ||  month > DEC)
        {
            printf("    ERROR: Jan.(1)  -  Dec.(12)\n");
        }
        if( year >= MIN_YEAR && year <= MAX_YEAR && month >= JAN &&  month <= DEC)
        {
            valid = 0;
        }
    }
    printf("\n *** Log Date set! ***\n\n");
    printf("Log starting date: %d -", year);
    switch (month) {
        case 1:
            printf("JAN");
            break;
        case 2:
            printf("FEB");
            break;
        case 3:
            printf("MAR");
            break;
        case 4:
            printf("APR");
            break;
        case 5:
            printf("MAY");
            break;
        case 6:
            printf("JUN");
            break;
        case 7:
            printf("JUL");
            break;
        case 8:
            printf("AUG");
            break;
        case 9:
            printf("SEP");
            break;
        case 10:
            printf("OCT");
            break;
        case 11:
            printf("NOV");
            break;
        case 12:
            printf("DEC");
            break;
        default:
            break;
    }
    printf("- %.2d", date);
    
    return 0;
}


