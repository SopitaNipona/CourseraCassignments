#include <stdio.h>
#include <stdlib.h>

static int idk = 0;

void print_file(FILE *fptr)
{
    int c;
    rewind(fptr);
    while ((c = getc(fptr)) != EOF)
    {
        putc(c, stdout);
    }
}

void generate_array(FILE *fptr)
{
    fscanf(fptr, "%d", &idk);
}

int main(void)
{
    FILE *fptr = fopen("test.txt", "r");
    print_file(fptr);
    return 0;
}
