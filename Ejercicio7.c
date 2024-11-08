/*Hacer un diagrama de flujo para calcular el precio de un ticket ida y vuelta
en ferrocarril, conociendo la distancia de ida y el tiempo de estancia.
Tambi ́en se sabe que si el numero de d ́ıas de estancia es mayor a 7 y la
distancias total (ida y vuelta) a recorrer es mayor a 800 km, el ticket tiene
un descuento del 30%. El precio por km es de $0.23.*/

#include <stdio.h>
#define PRECIO_KM 0.23
#define DESC 0.30

int main() 
{
    float distanciaIda, distanciaTotal, costoBase, costoFinal;
    int diasEstancia;

    
    printf("Ingrese la distancia de ida en km: ");
    scanf("%f", &distanciaIda);
    printf("Ingrese el número de días de estancia: ");
    scanf("%d", &diasEstancia);

    
    distanciaTotal = distanciaIda * 2;
    costoBase = distanciaTotal * PRECIO_KM;

    if (diasEstancia > 7 && distanciaTotal > 800) 
    {
        costoFinal = costoBase * (1 - DESC); 
    } 
    else 
    {
        costoFinal = costoBase; 
    }

    printf("El precio del ticket es: %.2f\n", costoFinal);

    return 0;
}
