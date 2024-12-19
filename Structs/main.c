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