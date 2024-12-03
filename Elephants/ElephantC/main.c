#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float getAvg(int arr[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    return (float)sum / n;
}

int main(void) {
    FILE *fprt = fopen("ElephantNum.txt", "r");

    if (fprt == NULL) {
        printf("Failure to open file\n");
        return 1; // Salimos si no se abre el archivo
    }

    //printf("File opened\n");

    fseek(fprt, 0, SEEK_END);
    long filesize = ftell(fprt); // Obtenemos el tamaño del archivo
    rewind(fprt); // Regresamos al inicio del archivo

    if (filesize <= 0) {
        printf("Invalid file size: %ld\n", filesize);
        fclose(fprt);
        return 1;
    }

    char *str = malloc(filesize + 1); // +1 para el terminador nulo

    if (str == NULL) {
        printf("malloc failed\n");
        fclose(fprt);
        return 1;
    }

    // Leer el contenido del archivo
    fread(str, 1, filesize, fprt);
    str[filesize] = '\0'; // Terminador nulo para trabajar como string

    //printf("File size: %ld\n", filesize);
    //printf("File contents:\n%s\n", str);

    size_t sizearr = 10;
    char *token = strtok(str," \t");
    int *arr = malloc(sizeof(int) * filesize);

    if (arr == NULL)
    {
        printf("Failure to allocate memory\n");
        fclose(fprt);
        return 1;
    }

    size_t count = 0;


    while (token != NULL)
    {
        int num = atoi(token);
        if (count >= sizearr)
        {
            sizearr *= 2;
            int *temp = realloc(arr, sizearr * sizeof(int));
            if (temp == NULL) {
                printf("Memory reallocation failed\n");
                free(arr);
                return 1;
            }
            arr = temp;
        }
        arr[count++] = atoi(token);
        token = strtok(NULL, " \t");

    }

 /* printf("\n");
    for (size_t i = 0; i < count-1; i++) {
        printf("%d\n", arr[i]);
    }*/

    float res = getAvg(arr, count-1);

    printf("%.2f", res);

    // Limpiar recursos
    free(str);
    fclose(fprt);

    return 0;
}

