#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    int d;
    struct node *left;
    struct node *right;
};

typedef struct node NODE;
typedef NODE *BTREE;

void inorder(BTREE root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->d);
        inorder(root->right);
    }
}

BTREE new_node()
{
    return malloc(sizeof(BTREE));
}

BTREE init_node(int d1, BTREE p1, BTREE p2)
{
    BTREE t;
    t = new_node();
    t -> d = d1;
    t -> left = p1;
    t -> right = p2;

    return t;
}

BTREE create_tree(int a[], int i, int size)
{
    if (i >= size)
    {
        return NULL;
    } else
    {
        return (init_node(a[i], create_tree(a, 2 * i + 1, size), create_tree(a, 2 * i + 1, size)));
    }
}

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
    current_size = size;
    //2D char array to store the numbers using malloc
    char *arraychar = malloc(size * size * sizeof(char));
    for (int i = 0; i < size; i++)
    {
        char tempchar[size];
        fscanf(fptr, "%s", &tempchar);
        strcpy(&arraychar[i * size], tempchar);
    }

    int *array = malloc(size * sizeof(int));

    //converts the char numbers into integer
    for (int i = 0; i < size; i++)
    {
        array[i] = atoi(&arraychar[i * size]);
    }
    

    free(arraychar);

    return array;
}

/*
//Returns the average value from the array
double average(const int *array, int size)
{

    double summation = 0.0;
    for (int i = 0; i < size; i++)
    {
        summation += array[i];
    }

    return (summation / size);
}

//gets the maximum value from the array

int max_element(const int *array, int size)
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
*/

//prints the array
void print_array(const int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}
/*
void print_to_file(FILE *fptr, const int *array, int size, double average, int max_element)
{
    for (int i = 0; i < size; i++)
    {
        fprintf(fptr, "%d ",array[i]);
    }
    fprintf(fptr, "\n");
    fprintf(fptr, "Average: %lf\n", average);
    fprintf(fptr, "Max element: %d\n", max_element);
}*/

int main(void)
{
    //input test.txt
    FILE *fptr = fopen("test.txt", "r");
    int *array = generate_array(fptr);
    print_array(array, current_size);
    printf("\n");
    //double result_avgr = average(array, current_size);
    //int res_max_element = max_element(array, current_size);
    //printf("%f\n", result_avgr);
    //printf("%d\n", res_max_element);
    free(array);
    fclose(fptr);
    return 0;
}