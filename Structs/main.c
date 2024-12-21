#include <stdio.h>

//Enum and struct of month and date defined into types

typedef enum month {jan, feb, mar, apr, may, jun, jul, agu, sep, oct, nov, dec} month;
typedef struct date {month m; int d;} date;

//Return the next month via enum

month next_month(month m)
{
    return(m + 1) % 12;
}

//Changes the date via pointer

void next_day(date *da)
{

    //Switch statements to indentify the end of each month
    switch(da -> m){
    case jan:
        if (da -> d == 31)
        {
            da -> d = 1;
            da -> m = next_month(da -> m);
        }
        else
        {
            da -> d++;
        }
        break;
    case feb:
        if (da -> d == 28)
        {
            da -> d = 1;
            da -> m = next_month(da -> m);
        }
        else
        {
            da -> d++;
        }
        break;
    case mar:
        if (da -> d == 31)
        {
            da -> d = 1;
            da -> m = next_month(da -> m);
        }
        else
        {
            da -> d++;
        }
        break;
    case apr:
        if (da -> d == 30)
        {
            da -> d = 1;
            da -> m = next_month(da -> m);
        }
        else
        {
            da -> d++;
        }
        break;
    case may:
        if (da -> d == 31)
        {
            da -> d = 1;
            da -> m = next_month(da -> m);
        }
        else
        {
            da -> d++;
        }
        break;
    case jun:
        if (da -> d == 30)
        {
            da -> d = 1;
            da -> m = next_month(da -> m);
        }
        else
        {
            da -> d++;
        }
        break;
    case jul:
        if (da -> d == 31)
        {
            da -> d = 1;
            da -> m = next_month(da -> m);
        }
        else
        {
            da -> d++;
        }
        break;
    case agu:
        if (da -> d == 31)
        {
            da -> d = 1;
            da -> m = next_month(da -> m);
        }
        else
        {
            da -> d++;
        }
        break;
    case sep:
        if (da -> d == 30)
        {
            da -> d = 1;
            da -> m = next_month(da -> m);
        }
        else
        {
            da -> d++;
        }
        break;
    case oct:
        if (da -> d == 31)
        {
            da -> d = 1;
            da -> m = next_month(da -> m);
        }
        else
        {
            da -> d++;
        }
        break;
    case nov:
        if (da -> d == 30)
        {
            da -> d = 1;
            da -> m = next_month(da -> m);
        }
        else
        {
            da -> d++;
        }
        break;
    case dec:
        if (da -> d == 31)
        {
            da -> d = 1;
            da -> m = next_month(da -> m);
        }
        else
        {
            da -> d++;
        }
        break;
    default:
        da -> d++;
    }
}

//Prints the name of the month with the enum month number

void print_date(date *da)
{
    const char* monthNames[] = {"January", "February", "March", "April", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
    printf("%d/%s\n", da -> d, monthNames[da -> m]);
}

int main(void)
{
    //variable created with date type
    date test;
    //February 28
    test.m = feb;
    test.d = 28;
    //Next day and print date
    next_day(&test);
    //date variable modified via pointer
    //Print date
    print_date(&test);
    //March 14
    test.m = mar;
    test.d = 14;
    //Next day and print
    next_day(&test);
    print_date(&test);
    //October 31
    test.m = oct;
    test.d = 31;
    //Next day and print
    next_day(&test);
    print_date(&test);
    //December 31
    test.m = dec;
    test.d = 31;
    //Next day and print
    next_day(&test);
    print_date(&test);


    return 0;
}