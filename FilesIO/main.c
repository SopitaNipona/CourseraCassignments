#include <stdio.h>


FILE *fptr = fopen("test.txt", "r");

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
    printf("Hello, World!\n");
    return 0;
}