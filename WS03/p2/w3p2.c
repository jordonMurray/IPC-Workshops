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
#define LOG_DAYS 3
#define MIN_YEAR 2010
#define MAX_YEAR 2021
#include <stdio.h>

int main()
{
    const int JAN = 1, DEC = 12;
    const float minRating = 0.0, maxRating = 5.0;
    int year,month,date = 1, valid = 1;
    float morningRating, eveningRating, morningTotalRating, eveningTotalRating;
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
    for (int i =0; i < LOG_DAYS; i++) {
    printf("%d-", year);
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
        printf("-%.2d\n", date);
        valid = 1;
        while (valid) {
            printf("    Morning rating (0.0-5.0): ");
            scanf("%f", &morningRating);
            if(morningRating < minRating || morningRating > maxRating)
            {
                printf("        ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            }
            else{
                morningTotalRating += morningRating;
                valid = 0;
            }
        }
        valid = 1;
        while (valid) {
            printf("    Evening rating (0.0-5.0): ");
            scanf("%f", &eveningRating);
            if(eveningRating < minRating || eveningRating > maxRating)
            {
                printf("         ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            }
            else{
                eveningTotalRating += eveningRating;
                valid = 0;
                printf("\n");
            }
        }
        date += 1;
    }
    printf("\nSummary\n");
    printf("=======");
    printf("\nMorning total rating: %.3f", morningTotalRating);
    printf("\nEvening total rating: %.3f", eveningTotalRating);
    printf("\n---------------------------");
    printf("\nOverall total Rating: %.2f", morningTotalRating + eveningTotalRating);
    printf("\n\nAverage morning rating: %.1f",morningTotalRating/LOG_DAYS);
    printf("\nAverage evening rating: %.1f",eveningTotalRating/LOG_DAYS);
    printf("\n---------------------------");
    printf("\nAverage overall rating: %.1f",((eveningTotalRating/LOG_DAYS)+(morningTotalRating/LOG_DAYS))/2);
        return 0;
}


