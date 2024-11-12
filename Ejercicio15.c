/*Escribir un programa, tal que dado como entrada un arreglo unidimensional de enteros, 
determinar cuantos de ellos son positivos, negativos o nulos.*/

#include <stdio.h>

int main() 
{
    int Dim, positivos = 0, negativos = 0, nulos = 0;

    printf("Ingrese la dimensión del arreglo: ");
    scanf("%d", &Dim);

    int arr[n];
    printf("Ingrese los numeros que se almacenaran:\n");
    for (int i = 0; i < Dim; i++) 
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < Dim; i++) 
    {
        if (arr[i] > 0) 
        {
            positivos++;
        }
        else if (arr[i] < 0) 
        {
            negativos++;
        } 
        else 
        {
            nulos++;
        }
    }

    printf("\nResultados:\n");
    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Nulos (ceros): %d\n", nulos);

    return 0;
}
