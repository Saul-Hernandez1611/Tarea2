/*construya un programa tal que dado como entrada un arreglo unidimensional de enteros, 
y un numero entero, determine cu ́antas veces se encuentra el numero dentro del arreglo.*/


#include <stdio.h>
#include <math.h>

int main() 
{
    int Dim, buscar, cont = 0;

    printf("Ingrese la dimensión de su arreglo: ");
    scanf("%d", &Dim);

    int arr[Dim];

    printf("Ingrese los elementos del arreglo:\n");
    for (int i = 0; i < Dim; i++) 
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arr[Dim]);
    }

    printf("Ingrese el número que desea buscar: ");
    scanf("%d", &buscar);

    for (int i = 0; i < DIm; i++) 
    {
        if (arr[i] == buscar) 
        {
            cont++;
        }
    }

    
    if (cont > 0) 
    {
        printf("El número %d aparece %d veces en el arreglo.\n", buscar, cont);
    } 
    else 
    {
        printf("El número %d no se encuentra en el arreglo.\n", buscar);
    }

    return 0;
}
