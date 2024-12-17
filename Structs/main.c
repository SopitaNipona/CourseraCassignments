#include <stdio.h>

int main(void)
{
    typedef enum month {jan, feb, mar, apr, may, jun , jul, agu, sep, oct , nov, dec} month;
    typedef struct date {month m; int d;} date;
    printf("Hello, World!\n");
    return 0;
}