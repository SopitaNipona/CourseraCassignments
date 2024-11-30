#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    FILE *fprt = fopen("ElephantNum.txt", "r");

    if (fprt == NULL) {
        printf("Failure to open file\n");
        return 1; // Salimos si no se abre el archivo
    }

    printf("File opened\n");

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

    printf("File size: %ld\n", filesize);
    printf("File contents:\n%s\n", str);

    char *token = strtok(str," \t");
    int *arr = malloc(sizeof(int) * filesize);

    if (arr == NULL)
    {
        printf("Failure to allocate memory\n");
        fclose(fprt);
        return 1;
    }



    while (token != NULL)
    {
        int num = atoi(token);

    }

    // Limpiar recursos
    free(str);
    fclose(fprt);

    return 0;
}

