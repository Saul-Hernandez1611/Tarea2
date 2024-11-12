/*Construir un algoritmo en lenguaje C para almacenar en un arreglo unidimensional los 100 primeros numeros pares. 
Realizar la prueba de escritorio,e imprimir al final del programa*/

#include <stdio.h>

int main() 
{
    int arr[100];
    int j = 0; 

    for (int i = 1; j < 100; i++) 
    {
        if (i % 2 == 0) 
        { 
            arr[j] = i;
            j++; 
        }
    }

    printf("Los primeros 100 números pares son:\n");
    for (int k = 0; k < 100; k++) 
    {
        printf("%d ", arr[k]);
    }
    printf("\n");

    return 0;
}

