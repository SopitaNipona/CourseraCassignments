#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Modified size global valued after running function generate_array
int current_size = 0;

//Prints the content of the file
void print_file(FILE *fptr)
{
    int c;
    rewind(fptr);
    while ((c = getc(fptr)) != EOF)
    {
        putchar(c);
    }
}

//Returns a pointer with an int array
int *generate_array(FILE *fptr)
{
    //gets the size value and place it initially at a char variable
    char sizechar;
    int size = 0;
    fscanf(fptr, "%s", &sizechar);
    //char to int
    size = sizechar - '0';
    //sets global variable
    current_size = size;
    //2D char array to store the numbers using malloc
    char *arraychar = malloc(size * size * sizeof(char));
    //gets the data on a tempchar and then copy's it to the heap allocated char array
    for (int i = 0; i < size; i++)
    {
        char tempchar[size];
        fscanf(fptr, "%s", &tempchar);
        strcpy(&arraychar[i * size], tempchar);
    }

    //Creates the int heap allocated array
    int *array = malloc(size * sizeof(int));

    //converts the char numbers into int and inserts them into the int array
    for (int i = 0; i < size; i++)
    {
        array[i] = atoi(&arraychar[i * size]);
    }

    //frees the char array
    free(arraychar);

    //returns the heap int array
    return array;
}

//Gets the pointer and the global size value
double average(int *array, int size)
{
    //Iterates the array and creates a summation
    double summation = 0.0;
    for (int i = 0; i < size; i++)
    {
        summation += array[i];
    }
    //return the division between summation and size
    return (summation / size);
}

//Gets the pointer and the global size value
int max_element(int *array, int size)
{
    //Max as the initial value
    int max = array[0];
    //iterates and compares the values to see if it is greater than the current value
    for (int i = 1; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}

void print_array(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}

void print_to_file(FILE *fptr, int *array, int size, double average, int max_element)
{
    for (int i = 0; i < size; i++)
    {
        fprintf(fptr, "%d ",array[i]);
    }
    fprintf(fptr, "\n");
    fprintf(fptr, "Average: %lf\n", average);
    fprintf(fptr, "Max element: %d\n", max_element);
}

int main(void)
{
    //input test.txt     output answer-hw3.txt
    FILE *fptr = fopen("test.txt", "r");
    FILE *fptr2 = fopen("answer-hw3.txt", "w");
    int *array = generate_array(fptr);
    print_array(array, current_size);
    printf("\n");
    double result_avgr = average(array, current_size);
    int res_max_element = max_element(array, current_size);
    printf("%f\n", result_avgr);
    printf("%d\n", res_max_element);
    print_to_file(fptr2, array, current_size, result_avgr, res_max_element);
    free(array);
    fclose(fptr);
    return 0;
}