#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int current_size = 0;

void print_file(FILE *fptr)
{
    int c;
    rewind(fptr);
    while ((c = getc(fptr)) != EOF)
    {
        putchar(c);
    }
}

int *generate_array(FILE *fptr)
{

    char sizechar;
    int size = 0;
    fscanf(fptr, "%s", &sizechar);
    size = sizechar - '0';
    current_size = size;
    char *arraychar = malloc(size * size * sizeof(char));
    for (int i = 0; i < size; i++) {
        //fscanf(fptr, "%s", &arraychar[i]);

        char tempchar[size];
        fscanf(fptr, "%s", &tempchar);
        strcpy(&arraychar[i * size], tempchar);
    }

    //printf("Array size: %s\n", arraychar[3]);
    //printf("Array size: %s\n", &arraychar[3 * size]);

    int *array = malloc(size * sizeof(int));

    for (int i = 0; i < size; i++)
    {
        array[i] = atoi(&arraychar[i * size]);
    }

    free(arraychar);

    return array;
}

double average(int *array, int size)
{
    double sumatory = 0.0;
    for (int i = 0; i < size; i++)
    {
        sumatory += array[i];
    }
    return (sumatory / size);
}

int max_element(int *array, int size)
{
    int max = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}

int main(void)
{
    FILE *fptr = fopen("test.txt", "r");
    int *array = generate_array(fptr);
    for (int i = 0; i < current_size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    printf("%f\n", average(array, current_size));
    printf("%d\n", max_element(array, current_size));
    free(array);
    fclose(fptr);
    return 0;
}