#include <iostream>
#include <stdio.h> // <>

int main(void) {
    int numero_filas_columnas=0;
    char opcion='0';
    printf("Introduzca el número de filas y columnas para el triangulo equilatero (debe ser mayor a 1) : ");
    scanf("%i",&numero_filas_columnas);
    if (numero_filas_columnas<2) {
        printf("Valor no es mayor a 1");
    }
    else {
        for (int i=0;i<numero_filas_columnas;i++) {
            printf("\n");
            for (int espacios=0;espacios<numero_filas_columnas-i;espacios++) {
                printf(" ");
                }
            for(int asteriscos=0;asteriscos<i+1;asteriscos++) {
                printf("* ");
            } 
        }
    }
    return 0;
}