#include <stdio.h>

typedef enum month {jan, feb, mar, apr, may, jun, jul, agu, sep, oct, nov, dec} month;
typedef struct date {month m; int d;} date;

month next_month(month m)
{
    return(m + 1) % 12;
}

date next_day(date *da)
{
    int day = da->d;
    month m = da->m;

    switch(m){
    case m == feb && day == 28:
        da -> d = 1;
        da -> m = next_month(da -> m);
        break;
    default:
        da -> d++;
    }


}

date print_date(date *da)
{
    printf("%d/%d\n", da -> d, da -> m);
}

int main(void)
{
    date test;


    return 0;
}