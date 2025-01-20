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


int *generate_array(FILE *fptr)
{

    int size = 0;
    fscanf(fptr, "%d", &size);
    int *array = malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) {
        fscanf(fptr, "%d", array[i]);
    }

    return array;
}

int main(void)
{
    FILE *fptr = fopen("test.txt", "r");
    int *array = generate_array(fptr);
    for(int i = 0; i < (sizeof(array)/sizeof(int)); i++)
        printf("%d ", array[i]);
    free(array);
    return 0;
}