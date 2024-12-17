#include <stdio.h>

typedef enum month {jan, feb, mar, apr, may, jun, jul, agu, sep, oct, nov, dec} month;
typedef struct date {enum month m; int d;} date;

month next_month(month m)
{
    return(m + 1) % 12;
}

date next_date(month m, date da)
{

}

int main(void)
{


    printf("Hello, World!\n");
    return 0;
}