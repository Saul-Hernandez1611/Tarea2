/*Hacer un algoritmo en lenguaje c, que calcule e imprima el producto de los N 
primeros numeros naturales.*/

#include <stdio.h>

int main() 
{
    int Numero;
    unsigned long long producto = 1;

    printf("Ingrese un número entero positivo N: ");
    scanf("%d", &Numero);

    if (Numero > 0) 
    {
        for (int i = 1; i <= Numero; i++) 
        {
            producto *= i;
        }

        printf("El producto de los primeros %d números naturales es: %llu\n", Numero, producto);
    }
    else
    {
        printf("Por favor, ingrese un número entero positivo de N,\n");
        return 1;
    }

    return 0;
}
