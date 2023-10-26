#include <iostream>
#include <stdio.h> // <>
#include <string>
#include <cstdio>
#include <cstring>
#include <conio.h>
#include <windows.h>
using namespace std;

int main() {
    int filas_columnas=0;
    int i;
    char opcion=0;
    printf("Intrdozca cuántas filas y columnas va a querer para el cuadrado : ");
    scanf("%i", &filas_columnas);
    for (int i = 0; i<filas_columnas; i++) {
        for (int o = 0;o<filas_columnas; o++) {
            printf ("* ");
        }
        printf("\n");
    }

    return 0;    
}