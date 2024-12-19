#include <stdio.h>

typedef enum month {jan, feb, mar, apr, may, jun, jul, agu, sep, oct, nov, dec} month;
typedef struct date {month m; int d;} date;

month next_month(month m)
{
    return(m + 1) % 12;
}

void next_day(date *da)
{

    switch(da -> m){
    case (feb):
        if (da -> d == 28)
        {
            da -> d = 1;
            da -> m = next_month(da -> m);
        }
        break;
    default:
        da -> d++;
    }


}

void print_date(date *da)
{
    int month = da -> m;
    month++;
    printf("%d/%d\n", da -> d, month);
}

int main(void)
{
    date test;
    test.m = feb;
    test.d = 28;
    next_day(&test);
    print_date(&test);


    return 0;
}