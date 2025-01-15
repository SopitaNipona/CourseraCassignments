#include <stdio.h>
#include <stdlib.h>

void print_file(FILE *fptr)
{
    int c;
    rewind(fptr);
    while ((c = getc(fptr)) != EOF)
    {
        putc(c, fptr);
    }
}

int main(void)
{
    FILE *fptr = fopen("./Temporary/test.txt", "r");
    printf("Hello, World!\n");
    return 0;
}