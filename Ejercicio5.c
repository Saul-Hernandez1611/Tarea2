/*En un negocio de productos electrodomesticos aplican un descuento del
8% a todos aquellos clientes cuya compra es superior a $2,500. Dado como
dato el monto de la compra del cliente, calcule lo que el cliente debe pagar.
Hacer el codigo en lenguaje C correspondiente al problema.*/

#include <stdio.h>
#include <math.h>

int main() 
{
  float montoCompra, montoFinal;

  printf("Ingrese el monto de la compra: ");
  scanf("%f", &montoCompra);

  
  if (montoCompra > 2500) 
  {
    montoFinal = montoCompra * 0.92; // Aplicar un descuento del 8%
  } 
  else 
  {
    montoFinal = montoCompra; // No se aplica descuento
  }

  printf("El monto a pagar es: %.2f\n", montoFinal);

  return 0;
}
