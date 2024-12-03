#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float getAvg(int arr[], int n) { //Takes array and the number of elements
    int sum = 0;

    for (int i = 0; i < n; i++) { //adds the numbers of the whole array
        sum += arr[i];
    }

    return (float)sum / n; //Returns the average
}

int main(void) {
    FILE *filePointer = fopen("ElephantNum.txt", "r"); //Opens file in read mode

    if (filePointer == NULL) {
        printf("Failure to open file\n");
        return 1; // Exits if file fails to open
    }

    //printf("File opened\n");

    fseek(filePointer, 0, SEEK_END); //Points to the end of the file
    long filesize = ftell(filePointer); // size of the file
    rewind(filePointer); // return to the start of the file

    if (filesize <= 0) {
        printf("Invalid file size: %ld\n", filesize); //Wrong file size calculation
        fclose(filePointer); //Closes the file
        return 1;
    }

    char *stringPointer = malloc(filesize + 1); // +1 for null terminator

    if (stringPointer == NULL) {
        printf("malloc failed\n");
        fclose(filePointer); //Close file pointer
        return 1;
    }

    // Read file content
    fread(stringPointer, 1, filesize, filePointer);
    stringPointer[filesize] = '\0'; // null terminator to work as a string

    //printf("File size: %ld\n", filesize);
    //printf("File contents:\n%s\n", str);

    size_t sizeArray = 10;
    char *token = strtok(stringPointer," \t"); //We use a tokenizer to separate de numbers from its space tab separators
    int *Array = malloc(sizeof(int) * filesize); //Memory allocator to create the array with the size of the file size

    if (Array == NULL)
    {
        printf("Failure to allocate memory\n");
        fclose(filePointer);
        return 1;
    }

    size_t count = 0; //Count to compare the filesize


    while (token != NULL)
    {
        if (count >= sizeArray) //realloc more space if there is no enough space
        {
            sizeArray *= 2;
            int *temp = realloc(Array, sizeArray * sizeof(int));
            if (temp == NULL) {
                printf("Memory reallocation failed\n");
                free(Array);
                return 1;
            }
            Array = temp;
        }
        Array[count++] = atoi(token); //Convert char numbers into int
        token = strtok(NULL, " \t"); //iterate to next token

    }

    float result = getAvg(Array, count-1); //Subtract the extra space generated

    printf("%.2f", result);

    // clean allocated memory
    free(stringPointer);
    fclose(filePointer);

    return 0;
}

